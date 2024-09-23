#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(int arr[], int n)
{
    if(n==0) return 0;  // Handling empty array case

    int res = 1;
    for(int i=1; i<n; i++) // starting from 1 as the first element is unique by default 
    {
        if(arr[i] != arr[res-1])  // comparing with the last unique element
        {
            arr[res]=arr[i];  // placing the next unique element in the correct position
            res++;
        }
    }
    return res;  // return the number of unique elements
}

int main()
{
    int n;
    cout<<"enter the size of the array: ";
    cin>>n;
    int arr[n];                                                                             
    cout<<"enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr,arr+n);  // sorting to remove duplicates correctly

   int result = removeDuplicates(arr,n);
   for(int i=0; i<result; i++)   // it prints elements only up to the result value, which indicates the number of unique elements.
    {
        cout<<""<<arr[i]<<" ";
    }

    return 0;
}



/*
    Time Complexity : O(n) 
    Auxiliary Space : O(1)
*/