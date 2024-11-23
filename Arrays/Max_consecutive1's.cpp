#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &arr)
{
    int maxCount = 0;
    int currCount = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            currCount++;
        }
        else
        {
            maxCount = max(maxCount, currCount);
            currCount = 0;
        }
    }
    currCount = max(maxCount, currCount);
    return currCount;
}

void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    // cout<<"\n";
}

int main()
{
    int n;
    cout << "Enter size: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter values: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The maximum number of consecutive 1's is: " << findMaxConsecutiveOnes(arr);
    // cout<<"The array is: ";
    // print(arr);
    cout << "\n";
    return 0;
}




// largest odd number in string
int main()
{
    string largestOddNumber(string num)
{
    for(int i=num.size()-1; i>=0; i--)
    {
        char c = num[i];
        if(c%2 == 1)
        {
            return num.substr(0, i+1);
        }
    }
    return "";
}
}