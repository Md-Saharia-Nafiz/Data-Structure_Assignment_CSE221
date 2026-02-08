#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {9, 14, 10, 7, 1, 11};
    int n = 6;
    int pos, val;

    // Insert
    cout << "Enter position to insert : ";
    cin >> pos;
    cout << endl;
    cout << "Enter value to insert : ";
    cin >> val;

    if (n < 10 && pos >= 0 && pos <= n)
    {
        for (int i = n; i > pos; i--) arr[i] = arr[i-1];
        arr[pos] = val;
        n++;
    }
    else
    {
        cout << "Invalid position or array full!\n";
    }

    cout << endl;
    cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    // Delete
    cout << endl;
    cout << endl;
    cout << "Enter position to delete : ";
    cin >> pos;

    if (pos >= 0 && pos < n)
    {
        for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
        n--;
    }
    else
    {
        cout << "Invalid position!\n";
    }

    cout << endl;
    cout << "Array after deletion: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}

