#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key)
{
    for(int  i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout<<"enter the element to be searched: ";
    cin>>key;

    int result = linearSearch(arr, n, key);
    if(result != -1)
    {
        cout<<"Element found at index: "<<endl;
    }
    else 
    {
        cout<<"Element not found."<<endl;
    }
   
    // while(result == -1) {  // this loop will run until the element is found

    char choice = 'y';
    while(choice == 'y' || choice == 'Y')
    {
            int key;
            cout << "Please enter another element to search: ";
            cin >> key;

            int result = linearSearch(arr, n, key);
            if(result != -1)
            {
                cout << "element found at index: "<< result << endl;
            }
    else 
    {
        cout << "Element not found." << endl;
    }

    cout << "Do you want to search another element? (y/n): ";
    cin >> choice;
    
return 0;
}