#include <bits/stdc++.h>
using namespace std;

bool checkSort(int arr[], int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    if(n <= 0)
    {
        cout<<"enter +ve number"<<endl;
        return 1;
    }

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    bool result = checkSort(arr,n);
    // cout<< "" << arr[result] << endl;
    if(result)
    {
        cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted"<<endl;
    }
    return 0;

}