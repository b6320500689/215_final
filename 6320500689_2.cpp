#include <stdio.h>
int main ()
{
	int n,i,max=0,j=0,k;
	scanf ("%d",&n);
	int a[n];
	int b[1001]={0};
	if (n>= 2 && n<= 1000)
	{
		for (i=0; i<n; i++)
		{
			scanf ("%d",&k);
			b[k]++;
		}
		
		for (i=1; i<=1000; i++)
		{
			if (max<=b[i])
			{
				{
					max=b[i];
				}
			
			}
		}
		
		for (i=1; i<=1000; i++)
		{
			if (a[i]==max)
			{
				a[j]=i;
				j++;
			}
			
		}	
		
		for (i=0; i<j; i++)
		printf ("%d ",a[i]);
	}

	return 0;
	
}
