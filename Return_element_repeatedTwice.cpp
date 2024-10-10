#include <bits/stdc++.h>
using namespace std;

// return the elements which are repeated twice
void findElementsRepeatedTwice(int arr[], int n)
{
    cout<<"element repeated twice: ";
    for(int i=0; i<n; i++)
    {
        int count = 0;
        for(int j=0; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count == 2)
        {
            for(int k=0; k<i; k++)
            {
                if(arr[i] == arr[k])
                {
                    count--;
                }
            }
        }

        if(count == 2)
        {
            cout<<arr[i]<<" ";
        }

    }
    cout<<endl;

}

int main()
{
    int n;
    cin >> n;
    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    findElementsRepeatedTwice(arr, n);
}
