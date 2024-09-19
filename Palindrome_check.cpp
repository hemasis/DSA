#include <bits/stdc++.h>
using namespace std;

// a palindrome no. is a no. which is same from both sides e.g. 11,22,121,222,1441, etc.
// check if a number is palindrome or not
int main()
{
    int n,remainder,x;
    cin>>n;
    x=n;
    int sum=0;

    while(n>0)
    {
        remainder=n%10;
        sum = sum*10+remainder;
        n=n/10;
    }
    
    if(x==sum)
    {
        cout<<x<<" is Palindrome"<<endl;
    }
    else
    {
        cout<<x<<" is not Palindrome"<<endl;
    }
}