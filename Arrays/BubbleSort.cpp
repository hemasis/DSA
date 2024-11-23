#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // swap(arr[j], arr[j + 1]);
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void printarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n = 5;
    int arr[] = {4, 1, 5, 2, 3};

    cout << "BUBBLE Sorted Array: ";
    bubbleSort(arr, n);
    printarr(arr, n);
    return 0;
}