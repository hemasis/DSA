#include <bits/stdc++.h>
using namespace std;

int maxDiff(int arr[], int n)
{
    int res = arr[1] - arr[0], minval = arr[0];
    for(int j=1; j<n; j++)
    {
        res = max(res, arr[j] - minval);
        minval = min(minval, arr[j]);
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

    maxDiff(arr, n);
    cout << "Maximum difference: " << maxDiff(arr, n) << endl;

}