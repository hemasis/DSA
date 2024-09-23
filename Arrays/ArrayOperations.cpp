#include <bits/stdc++.h>
using namespace std;

// SEARCH ELEMENT IN ARRAY
int search(int arr[], int size, int x)
{
    for(int i=0;i<size;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    cout<<"Element not found";
}

// DELETE ELEMENT FROM ARRAY
int deleteEle(int arr[], int n, int x)
{
    int i;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
        if(i==n)
        {
            return n;
        }
        for(int j=i;j<n-1;j++)
        {
            arr[j]=arr[j+1];
        }
        return n-1;

    }
}



int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the element "<<i+1<<": ";
        cin>>arr[i];
    }
    int element;
    cout<<"Enter the element to search: ";
    cin>>element;
    cout<<"Element found at index: "<<search(arr,size,element);
    return 0;
}
