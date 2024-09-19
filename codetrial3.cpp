#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the size of an array: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int max = INT_MIN;
    int smax = INT_MIN;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];

        }
        else if(arr[i]>smax)
        {
            smax=arr[i];
        }

    }
    cout<<smax;
}
