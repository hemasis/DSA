#include <bits/stdc++.h>
using namespace std;

// void leftrotateD(int arr[], int n, int d)
// {
//     auto leftrotateone = [](int arr[], int n) {
//         int temp = arr[0];
//         for(int i=0;i<n;i++)
//         {
//             arr[i] = arr[i+1];
//         }
//         arr[n-1] = temp;
//     };

//     for(int i=0;i<d;i++)
//     {
//         leftrotateone(arr, n);
//     }
// }

double avg(int arr[], int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    return (double)sum/n;
}

int main()
{
    int n, d;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin>>d;
    // leftrotateD(arr, n, d);
    
    for (int i = 0; i < n; i++)
    {
        // cout << "" << arr[i] << " ";
        cout<<"";
    }

    return 0;
}