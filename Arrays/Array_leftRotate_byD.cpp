#include <bits/stdc++.h>
using namespace std;

// rotating elements of an array to the left by D positions
void leftRotateOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i+1];
        arr[n - 1] = temp;
    }
}

void leftRotatebyD(int arr[], int n, int d)
{
    int temp[d];
    for (int i = 0; i < d; i++)
    {
        temp[i] = arr[i];
        for (int i = d; i < n; i++)
        {
            arr[i - d] = arr[i];
        }
        for (int i = 0; i < d; i++)
        {
            arr[n - d + i] = temp[i];
        }
    }
}

void leftRotatebyReversal(int arr[], int n, int d)
{
    reverse(arr, 0, d - 1);
    reverse(arr, d, n - 1);
    reverse(arr, 0, n - 1);
}
void Reverse(int arr[], int low, int high)
{
    while (low < high)
    {
        swap(arr[low], arr[high]);
        low++;
        high--;
    }

    int main()
    {
        int size;
        cout << "Enter size: ";
        cin >> size;
        int arr[size];
        cout << "Enter elements: ";
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        leftRotatebyReversal(arr, size, 2);
        Reverse(arr, 0, size - 1);
        for (int i = 0; i < size; i++)
        {
            cout << "" << arr[i] << " ";
        }
    }

    /*
        Time Complexity : Theta(n)
        Auxiliary Space : Theta(d)
    */