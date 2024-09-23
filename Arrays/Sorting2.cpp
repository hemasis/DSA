#include <bits/stdc++.h>
using namespace std;

// source: striver
// MERGE Sort
/* this algorithm means divide and merge the array... 
that means we will divide the array into two parts and 
then merge them in a sorted manner
 */
int main()
{

    void mergesort(int arr[], int low, int mid, int high)
    {
        mid = (low+high)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);


    }
    
}