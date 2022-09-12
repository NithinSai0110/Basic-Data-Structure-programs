#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j;
	cout<<"Enter the noof numbers in set:";
	cin>>n;
	cout<<"Enter elements to the set:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			cout<<a[i]<<" is even\n";
		}
		else
		{
			cout<<a[i]<<" is odd\n";
		}
	}
}
