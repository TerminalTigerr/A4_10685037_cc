#include<stdio.h>
#include<iostream>

using namespace std;
int main()
{
	int m,n;
	cout<<"Enter first number: ";
	cin>>m;
	cout<<"Enter second number: ";
	cin>>n;
	int mn=min(m,n);
	int GCD=1;
	for(int i=1;i<=mn;i++)
	{
		if(m%i==0 && m%i==0)
		{
			GCD=max(GCD,i);
		}
	}
	cout<<"Greatest common divis is: "<<GCD;
	
	return 0;
}
