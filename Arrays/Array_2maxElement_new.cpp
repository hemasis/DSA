#include <bits/stdc++.h>
using namespace std;

// finding the largest element in an array
int largest(int arr[], int n)
{
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            largest = i;
        }
    }
    return largest;
}

// finding the second largest element in an array
int secondlargest(int arr[], int n)
{
    int res = -1, largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (res == -1 || arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // int result = largest(arr,n);
    int result = secondlargest(arr, n);
    // cout<<"The largest element is: "<<arr[result]<<endl;
    cout << "The second largest element is: " << arr[result] << endl;
    return 0;
}
