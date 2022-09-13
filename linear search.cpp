#include<stdio.h>
int main()
{
	int a[100],i,n,e;
	printf("Enter no of ele:");
	scanf("%d",&n);
	printf("Enter the elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the array is:");
	for(i=0;i<n;i++)
	{
		printf(" %d",a[i]);
	}
	printf("\nEnter the ele to search:\n");
	scanf("%d",&e);
	for(i=0;i<n;i++)
	{
		if(a[i]==e)
		{
			printf("Position is: %d",i+1);
		}
	}
}
