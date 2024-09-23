#include<bits/stdc++.h>
using namespace std;

// Taking user input & printing the array
int main()
{
    int size;
    cout<<"Enter size : ";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cout <<"Enter values: ";
        cin >> arr[i];
    }

    for(int i=0;i<size;i++)
    {
        cout << arr[i] << "";
    }
    
    return 0;
} 