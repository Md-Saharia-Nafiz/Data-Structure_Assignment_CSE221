#include <iostream>
using namespace std;

int main()
{
    int arr[] = {14, 33, 12, 10, 32, 19, 42};
    int n = 7;

    for(int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }

    cout << "Insertion Sort";
    cout << endl;
    cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    cout << endl;
    cout << "After Sorted Array : ";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}

