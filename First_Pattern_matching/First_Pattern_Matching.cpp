#include <iostream>
#include <string>
using namespace std;

int firstPatternMatch(const string &T, const string &P)
{
    int n = T.length();
    int m = P.length();

    if(m == 0) return 0;

    for (int i = 0; i <= n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
        {
            if (T[i + j] != P[j])
            {
                break;
            }
        }
        if (j == m)
        {
            return i + 1;
        }
    }
    return 0;
}

int main()
{

    cout << "First Pattern Matching";
    cout << endl;
    cout << endl;
    string T, P;
    cout << "Please Enter Text : ";
    getline(cin, T);
    cout << endl;
    cout << "Please Enter Pattern : ";
    getline(cin, P);

    cout << endl;
    int index = firstPatternMatch(T, P);
    if(index != 0)
        cout << "Congratulations! Pattern is found at index = " << index << endl;
    else
        cout << "Sorry! Pattern is not found in the text." << endl;

    return 0;
}

