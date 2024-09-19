#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    // cout<<"Enter values: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int a = sizeof(arr)/sizeof(arr[0]);
    int f = arr[0];   // first element
    int l = arr[n-1];  // last element

    cout<<"Size of array is: "<<a<<endl;
    cout<<"First element is: "<<f<<endl;
    cout<<"Last element is: "<<l<<endl;


    // int max = INT_MIN;
    // int min = INT_MAX;

    int max = INT_MIN;
    int smax = INT_MIN; // second largest element in an array
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            smax = max;
            max = arr[i];
        }
        else if (arr[i] > smax)
        {
            smax = arr[i];
        }
    }
    // cout<<max<<endl;
    cout << "The second largest element is: " << smax << endl;
}
//now find third max element in array


