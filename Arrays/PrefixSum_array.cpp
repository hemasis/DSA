#include <bits/stdc++.h>
using namespace std;

// PREFIX SUM array
int main()
{
    int n;
    cout<<"Enter size: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

   int pre[n];
   pre[0]=arr[0];
   for(int i=0;i<n;i++)
   {
    pre[i]=pre[i-1]+arr[i];
   }

   int k;
   cin>>k;
   while(k--)
   {
    int l,r;
    cin>>l>>r;
    if(l==0)
    {
        cout<<pre[r]<<endl;
    }
    else{
        cout<<pre[r]-pre[l-1]<<endl;
    }
    return 0;
   }
}
