#include <bits/stdc++.h> 
using namespace std; 

// swapping of two numbers
int main() 
{ 
	int a, b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;

	cout<<"Before Swapping: " <<a<<" "<<b<<endl;
	// Using inbuilt function
	swap(a,b); 

	// wihtout using temp variable
/*  a=a+b;
	b=a-b;
	a=a-b; 
*/

	// using temp variable
/*	int temp=0;
	temp=a;
	a=b;
	b=temp;
*/

	cout<<"After Swapping: " <<a<<" "<<b<<endl;

	return 0; 
}

