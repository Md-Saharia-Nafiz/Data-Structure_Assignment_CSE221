#include <iostream>
using namespace std;

int main()
{
    int arr[] = {19, 26,16, 11, 8};
    int n = 5;
    int swapCount = 0;

    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - i - 1; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapCount++;
            }
        }
    }

    cout << "Bubble Sort";
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
    cout << "\nTotal swaps performed : " << swapCount << endl;

    cout << endl;

    return 0;
}
