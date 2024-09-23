#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n)
{
    int res = arr[0];
    for(int i=0; i<n; i++)
    {
        int curr = 0;
        for(int j=i; j<n; j++)
        {
            curr += arr[j];
            res = max(res, curr);
        }
    }
    return res;
}

int maxSum2(int arr[], int sum)
{
    int res = arr[0];
    int maxEnding = arr[0];
    for(int i=1; i<sum; i++)
    {
        maxEnding = max(maxEnding + arr[i], arr[i]);
        res = max(res, maxEnding);
    }
    return res;
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

    // maxSum(arr, n);
    maxSum2(arr, n);
    // cout << "Maximum sum: " << maxSum(arr, n) << endl;
    cout << "Maximum sum: " << maxSum2(arr, n) << endl;

}