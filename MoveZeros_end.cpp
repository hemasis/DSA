#include <bits/stdc++.h>
using namespace std;

void movezeros(int arr[], int n) // naive approach
{
    for (int i = 0; i < n; i++) // traversing through the array
    {
        if (arr[i] == 0) // checking for zeros
        {
            for (int j = i + 1; j < n; j++) // traversing through the array from the next element
            {
                if (arr[j] != 0) // checking for non-zero elements
                {
                    swap(arr[i], arr[j]); // swapping the zero element with the non-zero element
                }
            }
        }
    }
}

void zerosEnd(int arr[], int n) // efficient approach
{
    int count = 0;              // initializing the count of zeros
    for (int i = 0; i < n; i++) // traversing through the array
    {
        if (arr[i] != 0) // checking for non-zero elements
        {
            swap(arr[i], arr[count]); // swapping the non-zero element with the zero element
            count++;                  // incrementing the count of zeros
        }
    }
}

int main()
{
    int n;
    cout << "enter the size: ";
    cin >> n;
    int arr[n];
    cout << "enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // movezeros(arr, n);
    zerosEnd(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << "" << arr[i] << " ";
    }

    return 0;
}

/*
1) Naive Approach:
In this approach, we traverse the array and, as soon as we find a 0 element, we traverse to the right of the 0, and swap it with the 1st non-0 element found.

Time Complexity: O(n2).
Auxiliary Space: O(1).


2) Efficient Approach
In this approach, we maintain a count of the non-0 elements traversed. When a 0 element is found, we place the value of the non-0 element at the element place of arr[count].

Time Complexity: O(n).
Auxiliary Space: O(1).

*/