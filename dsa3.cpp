#include<iostream>
using namespace std;
int main()
{
	int i,f=1,n;
	cout<<"Enter number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<"Factorial of "<<i-1<<" is "<<f;
}
