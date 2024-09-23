#include <bits/stdc++.h>
using namespace std;

void frequency(int arr[], int n)
{
    int freq = 1, i = 1;
    while (i < n)
    {
        while (i < n && arr[i] == arr[i - 1])
        {
            freq++;
            i++;
        }
        cout << arr[i - 1] << " " << freq << endl;
        i++;
        freq = 1;
    }
    if (n == 1 || arr[n - 1] != arr[n - 2])
        cout << arr[n - 1] << " " << 1 << endl;
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

    frequency(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<"";
    }
}


/*
Time Complexity: O(N)
Auxiliary Space: O(1)
*/