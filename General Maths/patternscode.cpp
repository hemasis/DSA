#include<bits/stdc++.h>
using namespace std;

void printpattern1(int n)
{
    for(int i=0;i<n;i++)   // this outer loop is for rows
    {
        for(int j=0;j<=i;j++)    // this inner loop is for columns
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern2(int n)
{
    for(int i=0;i<n;i++)   // this outer loop is for rows
    {
        for(int j=0;j<=i;j++)    // this inner loop is for columns
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void printpattern3(int n)
{
    for(int i=1;i<=n;i++)   // this outer loop is for rows
    {
        for(int j=1;j<=i;j++)    // this inner loop is for columns
        {
            cout<<j<<" ";   //here the nos are printed with a space in between
            // if you want to print the nos without space then just remove the space in between the ""

        }
        cout<<endl;
    }
}
void printpattern4(int n)
{
    for(int i=1;i<=n;i++)   // this outer loop is for rows
    {
        for(int j=1;j<=i;j++)    // this inner loop is for columns
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printpattern5(int n)
{
    for(int i=0;i<n;i++)   // this outer loop is for rows
    {
        for(int j=0;j<n-i+1;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void printpattern6(int n)
{
    for(int i=0;i<=n;i++)   // this outer loop is for rows
    {
        for(int j=1;j<=n-i;j++)    // this inner loop is for columns
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printpattern7(int n)
{
    // for pyramid pattern logic
    for(int i=0;i<n;i++)
    {
        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        // star
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }

        // space
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}
void printpattern8(int n)
{
    for(int i=0; i<n; i++)
    {
        // space
        for(int j=0; j<n-i-1; j++)
        {
            cout<<" ";
        }
        // star
        for(int j=0; j<2*n-(2*i+1); j++)
        {
            cout<<"*";
        }
        // space
        for(int j=0; j<n-i-1; j++)
        {
            cout<< " ";
        }
        cout<<endl;
    }
    // after running this code just combine pattern 7 and pattern 8 and you will get the desired pattern
}
void printpattern10(int n)
{
    for(int i=0;i<=2*n-1;i++)
    {
        int stars = i;
        if(i>n) stars = 2*n - i;
            for(int j=0;j<=stars;j++)
            {
                cout<<"*";
            }
            cout<<endl;
    }
}
void printpattern11(int n)
{
    int start = 1;
    for(int i=0;i<n;i++)
    {
        if(i%2==0) start = 1;
        else start = 0;
        for(int j=0;j<=i;j++)
        {
            cout<<start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void printpattern12(int n)
{
    int space = 2*(n-1);
    for(int i=1; i<=n; i++)
    {
        // numbers
        for(int j=1; j<=i; j++)
        {
            cout<<j;
        }
        // space
        for(int j=i; j>=i; j--)
        {
            cout<<j;
        }
        // numbers
        for(int j=i; j>=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
}

int main()
{
    int n;
    cout<<"Enter the no. of rows and columns: ";
    cin>>n;
    printpattern12(n);
    return 0;

}