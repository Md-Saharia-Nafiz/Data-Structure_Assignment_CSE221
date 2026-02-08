#include <iostream>
#include <vector>
#include <string>
using namespace std;

void buildLPS(const string &P, vector<int> &lps) {
    int m = P.size();
    lps[0] = 0;
    int len = 0;
    int i = 1;

    while (i < m) {
        if (P[i] == P[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

int KMPsearch(const string &T, const string &P) {
    int n = T.size();
    int m = P.size();
    if (m == 0) return 0;

    vector<int> lps(m);
    buildLPS(P, lps);

    int i = 0;
    int j = 0;

    while (i < n) {
        if (T[i] == P[j]) {
            i++;
            j++;
        }

        if (j == m) {
            return i - j + 1;
        } else if (i < n && T[i] != P[j]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
    return 0;
}

int main() {

    cout << "Second Pattern Matching";
    cout << endl;
    cout << endl;
    string T, P;
    cout << "Please Enter Text : ";
    getline(cin, T);
    cout << endl;
    cout << "Please Enter Pattern : ";
    getline(cin, P);

    cout << endl;
    int index = KMPsearch(T, P);
    if (index != 0)
        cout << "Congratulations! Pattern is found at index = " << index << endl;
    else
        cout << "Sorry! Pattern is not found in the text." << endl;

    return 0;
}

