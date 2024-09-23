#include <bits/stdc++.h>
using namespace std;

// finding the leaders in an array
// it compares the element with all the elements to its right and if it is greater than all the elements to its right, then it is a leader

// Naive approach
void leaderNaive(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag = false;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j])
            {
                flag = true;
                break;
            }
        }
        if(flag == false)
        {
            cout<<arr[i]<<" ";
        }
    }
}

// Efficient approach
void leaders(int arr[], int n)
{
    int curr_leader = arr[n-1];  //intialized the last element as the leader
    cout<<curr_leader<<" ";
    for(int i=n-2; i>=0; i--)   // traversing from second last element
    {
        if(curr_leader<arr[i])  // if the current leader is less than the current element, then the current element is the leader
        {
            curr_leader = arr[i];  // updating the current leader
            cout<<curr_leader<<" ";  
        }
    } 
}


int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    leaders(arr, n);
    for(int i=0; i<n; i++)
    {
        cout<<"";
    }
    
    return 0;
}
/*
Naive Approach:
    Time Complexity : O(n^2)
    Auxiliary Space : O(1)

Efficient Approach:
    Time Complexity : O(n)
    Auxiliary Space : O(1)
*/