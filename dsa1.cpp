#include<iostream>
using namespace std;
int main()
{
	int a[100][100],b[100][100],add[100][100],i,j,r,c;
	cout<<"Enter no of rows and columns:";
	cin>>r>>c;
	cout<<"Enter first matrix";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter second matrix";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Multiplied matrix:\n";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			add[i][j]=a[i][j]*b[i][j];
			cout<<add[i][j]<<" ";
		}
		cout<<endl;
	}
}
