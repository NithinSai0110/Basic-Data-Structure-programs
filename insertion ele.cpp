#include<stdio.h>
int main()
{
	int a[100],p,v,i,n,c;
	printf("Enter no of ele:");
	scanf("%d",&n);
	printf("Enter the values in array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
    }
    printf("Enter the choice \n1.insertion\n2.deletion\n3.display:\n");
	scanf("%d",&c);
    if(c==1)
    {
    	printf("Enter the position to insret:");
        scanf("%d",&p);
        printf("Enter the value to insert:");
        scanf("%d",&v);
        for(i=n-1;i>=p-1;i--)
        {
    	    a[i+1]=a[i];
	    }
	    a[p-1]=v;
	    printf("The new array is:");
	    for(i=0;i<=n;i++)
	    {
		    printf("%d ",a[i]);
	    }
	}
	else if(c==2)
	{
		printf("Enter pos to delete:");
		scanf("%d",&p);
		if(p-1<n-1)
		{
			for(i=p-1;i<=n-1;i++)
			{
				a[i]=a[i+1];
			}
			for(i=0;i<n-1;i++)
	        {
		        printf("%d ",a[i]);
	        }
		}
		else
		{
			printf("Enter valid position.");
		}
	}
	else if(c==3)
	{
		printf("Enter ele to find:");
		scanf("%d",&v);
		for(i=0;i<n;i++)
	    {
		    if(a[i]==v)
		    {
		    	printf("%d",i+1);
			}
	    }
	}
}
