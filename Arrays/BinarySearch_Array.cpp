#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> arr, int target)
{
    int start = 0, end = arr.size()-1;
    while(start <= end)
    {
        int mid = (start + end)/2;
        if(target > arr[mid])
        {
            start = mid + 1;
        } 
        else if(target < arr[mid])
        {
            end = mid -1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int target;
    vector<int> arr1 = {1,2,3,4,5,6,7,8,9,10,11,12};
    target = 9;

    cout<<binarySearch(arr1, target)<<endl;

    vector<int> arr2 = {-1,0,3,5,9,12};
    target = 0;

    cout<<binarySearch(arr2, target)<<endl;

}