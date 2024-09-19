//ROTATE ARRAY
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cout<<"Enter size: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

//rotate logic
    int rot;
    cout<<"Enter the number of rotations: ";
    cin>>rot;

    for(int i=0;i<rot;i++)
    {
        int temp=arr[0];
        for(int j=0;j<size-1;j++)
        {
            arr[j]=arr[j+1];
        }
        arr[size-1]=temp;
    }
    cout<<"Array after rotation: ";

    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;

    return 0;

}