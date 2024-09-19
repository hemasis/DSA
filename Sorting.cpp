#include <bits/stdc++.h>
using namespace std;

// source: striver
void selectionsort(int arr[], int n)
{
    for(int i=0;i<=n-2;i++)
    {
        int mini = i;
        for(int j=i;j<=n-1;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;

    } 
}

void bubblesort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--)
    {
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void insertionsort(int arr[], int n)
{
    for(int i=0;i<=n-1;i++)
    {
        int j = i;
        while(j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;

            j--;
        }
    }
}


int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    // bubblesort(arr,n);
    // insertionsort(arr,n);

    cout<<"Sorted array is: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;

// source: geekforgeeks
// bool sorted(int arr[], int n)
// {
//     for(int i=1;i<n;i++)
//     {
//         for(int j=i;j<n-1;j++)
//         {
//             if(arr[j]<arr[j-1])
//             {
//                 return false;
//             }
//         }
//     }
//     return true;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the size of the array:";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     sorted(arr,n);
//     for(int i=0;i<n;i++)
//     {
//         cout<<arr[i]<<" ";
//     }

//     return 0;
// }


/* Selection Sort:
    Time Complexity: 
        Best, Worst & Average: O(n^2)
    Space Complexity: O(1)
*/

/* Bubble Sort:
Time Complexity: 
    Worst & Average: O(n^2)
    Best: O(n) when array is already sorted or by doing some optimization
Space Complexity: O(1)
*/

/* Insertion Sort:
Time Complexity: 
    Worst & Average: O(n^2)
    Best: O(n) when array is already sorted or by doing some optimization
Space Complexity: O(1)S
*/