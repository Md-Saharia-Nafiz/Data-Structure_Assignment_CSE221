#include <iostream>
using namespace std;

int binarysearch(int array[], int x, int low, int high)
{
    if (high >= low)
    {
        int mid = low + (high - low) / 2;

        if (x == array[mid])

            return mid;

        if (x > array[mid])

            return binarysearch(array, x, mid+1, high);

        return binarysearch(array, x, low, mid-1);
    }

    return -1;
}

int main(void)
{
    int array[] = {15,27,33,61,74,89,96,98};

    int x = 74;

    int n = sizeof(array) / sizeof(array[0]);

    int result = binarysearch(array, x, 0, n-1);

    if (result == -1)

        printf("Not Found");

    else

        printf("After Binary Search \n\nElement is Found at index = %d", result);

    cout << endl;

    return 0;

}









