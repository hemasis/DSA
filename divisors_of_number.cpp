#include<bits/stdc++.h>
using namespace std;

// Print all divisors of a number
void printDivisors(int n)
{
    for(int i=0;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
        }
    }
    
}

int main()
{
    int n;
    cin>>n;
    printDivisors(n);
    return 0;
}

// Time complexity is O(n)
// Space complexity is O(1)