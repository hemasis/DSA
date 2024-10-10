/*  Diagrammaric representation of Linear Search in an array with pseudocode
        +--------------------+
        |   Start            |
        +--------------------+
                 |
                 V
        +--------------------+
        |  Input array size n |
        +--------------------+
                 |
                 V
        +--------------------+
        |  Input array values |
        +--------------------+
                 |
                 V
        +--------------------+
        |  Input key to find  |
        +--------------------+
                 |
                 V
        +----------------------------+
        |  Initialize i = 0           |
        +----------------------------+
                 |
                 V
        +----------------------------+
        |  i < n ?                   |
        +----------------------------+
           |                |
       No  |                | Yes
        +----------------------------+
        |  arr[i] == key ?            |
        +----------------------------+
           |         |
           | Yes      | No
    +------------------+    +--------------------------+
    |  Return i (Found) |    | Increment i (i = i + 1)  |
    +------------------+    +--------------------------+
                                    |
                                    V
        +----------------------------+
        | If i == n, return -1 (Not   |
        | Found)                      |
        +----------------------------+
                 |
                 V
        +--------------------+
        |       End           |
        +--------------------+
*/


// Here is the code for linear search in an array


#include <bits/stdc++.h>
using namespace std;

// linear search
int linearsearch(int arr[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i] == key)
        {
            return i;  // returns the index of the element
        }
    }
    return -1;  //returns -1 if the element is not found
}

int main()
{
    int n, key;
    cout<<"enter the size of the array: ";
    cin>>n;

    int arr[n];
    cout<<"enter the elements: ";

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"enter the key: ";
    cin>>key;   // inputs the element to be searched

    int result = linearsearch(arr, n, key);

    if(result != -1)   // output of the result
    {
        cout<<"element found at index: "<<result;
    }
    else 
    {
        cout<<"element not found";
    }
    
    return 0;
}