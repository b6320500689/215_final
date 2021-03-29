#include <stdio.h>
int main ()
{
	int n,i,max=0,j=0,k;
	scanf ("%d",&n);
	int a[n];
	int l[1001]={0};
	if (n>= 2 && n<= 1000)
	{
		for (i=0; i<n; i++)
		{
			scanf ("%d",&k);
			l[k]++;
		}
		for (i=1; i<=1000; i++)
		{
			if (max<=l[i])
			{
				if (l[i]>0)
				{
					a[j]=i;
					j++;
				}
			max=l[i];
			}
			
		}	
		for (i=0; i<j; i++)
		printf ("%d",a[i]);
	}

	return 0;
	
}
