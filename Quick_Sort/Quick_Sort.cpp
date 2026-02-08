#include <iostream>
using namespace std;

int partition(int arr[], int l, int h)
{
    int pivot = arr[h];
    int i = l - 1;

    cout << "\nPartitioning with pivot " << pivot << ": ";

    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i + 1], arr[h]);

    for (int k = l; k <= h; k++)
    {
        if (k == i + 1) cout << "[" << arr[k] << "] ";
        else cout << arr[k] << " ";
    }

    cout << endl;

    return (i + 1);
}

void quick_sort(int arr[], int l, int h)
{
    if (l < h)
    {
        int p = partition(arr, l, h);
        quick_sort(arr, l, p - 1);
        quick_sort(arr, p + 1, h);
    }
}

int main()
{
    int arr[] = {9, 14, 10, 7, 1, 11};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Quick Sort";
    cout << endl;
    cout << endl;
    cout << "Original Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    quick_sort(arr, 0, n - 1);
    cout << endl;
    cout << "After Sorted Array: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


