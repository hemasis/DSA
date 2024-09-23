#include <bits/stdc++.h>
using namespace std;

// ARMSTRONG Numbers
int main()
{
    int n,r,sum=0,temp;
    cin>>n;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum+=(r*r*r);
        n/=10;
    }
    if(temp==sum)
    {
        cout<<"Armstrong Number";
    }
    else {
        cout<<"Not Armstrong Number";
    }
}