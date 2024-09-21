#include <bits/stdc++.h>
using namespace std;

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0]; // storing the first element in a temporary variable
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i]; // shifting all elements to the left by one position
    }
    arr[n - 1] = temp; // placing the first element at the last position
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leftRotatebyOne(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << "" << arr[i] << " ";
    }

    return 0;
}

/*
    Time Complexity : Theta(n)
    Auxiliary Space : Theta(1)
*/