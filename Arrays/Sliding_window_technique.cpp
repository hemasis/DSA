#include <bits/stdc++.h>
using namespace std;

int maxSum(int arr[], int n, int k)
{
    int res = INT_MIN;
    for(int i=0; i+k-1<n; i++)
    {
        int curr = 0;
        for(int j=0; j<k; j++)
        {
            curr += arr[i+j];
            res = max(res, curr);
        }
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

    maxSum(arr, n, 3);
    cout << "Maximum sum: " << maxSum(arr, n, 3) << endl;

}