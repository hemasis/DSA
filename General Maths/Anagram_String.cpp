#include <bits/stdc++.h>
using namespace std;

// ANAGRAM STRING 
int main()
{
    string a,b;
    cin>>a>>b;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    if(a==b){
        cout<<"Anagram String";
    }
    else{
        cout<<"Not Anagram String";
    }
    return 0;
    }
    
    // TIME COMPLEXITY IS: O(nlogn) 
    // SPACE COMPLEXITY IS: O(1)
