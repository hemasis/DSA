#include<bits/stdc++.h>
using namespace std;
// REVERSE an array

void arrayReverse(int arr[], int n)
{
    // Method 1: creating a new array and storing the elements in reverse order
    // int rev[n];
    // for(int i=0;i<n;i++)
    // {
    //     rev[i]=arr[n-i-1];
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<rev[i]<<" ";
    // }


// Method 2: swapping the elements to reverse in the same array
    // int i=0, j=n-1;
    // while(i<j)
    // {
    //     swap(arr[i],arr[j]);
    //     i++;
    //     j--;
    // }

    // for(int i=0;i<n;i++)
    // {
    //     cout<<arr[i]<<" ";
    // }


// Method 3: using reverse function
    reverse(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}


int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    arrayReverse(arr,n);
    return 0;

}