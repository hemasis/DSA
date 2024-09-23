#include<bits/stdc++.h>
using namespace std;

// finding SUM, AVERAGE, MAX ELEMENT, MIN ELEMENT and DISPLAYING THE SIZE in an array
int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"enter val: ";
    for(int i=0;i<size;i++)
    {
        
        cin>>arr[i];

    }
//SUM
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        // cout<<arr[i];

    }
    cout<<"sum is: "<<sum<<"\n";

//AVERAGE
    double avg=(double)sum/size;
    cout<<"average is: "<<avg<<"\n";

//MAX ELEMENT
    int max = INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }
        cout<<"Max element is: "<<max<<"\n";

//MIN ELEMENT
    int min = INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout<<"Min element is: "<<min<<"\n";


// DISPLAYING THE SIZE of the array
int sizecheck = sizeof(arr) / sizeof(int);
cout<<"Size of the given array is: "<<sizecheck;
    return 0;
}