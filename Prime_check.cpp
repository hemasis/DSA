#include <bits/stdc++.h>
using namespace std;

// check PRIME NUMBER or not
int main()
{
    int n;
    int c=0;
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }

    if(c==1)
    {
        cout<<"Prime";
    }
    else
    {
        cout<<"Not Prime";
    }
}