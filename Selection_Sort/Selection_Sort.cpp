#include <iostream>
using namespace std;

int main()
{
    int arr[] = {14, 33, 12, 10, 32, 19, 42};
    int n = 7;

    for(int i = 0; i < n - 1; i++)
    {
        int minIndex = i;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }

    cout << "Selection Sort";
    cout << endl;
    cout << endl;
    cout << "Original Array : ";
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
