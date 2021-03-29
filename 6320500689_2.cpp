#include <stdio.h>
int main ()
{
	int n,i,max=0,j=0,l;
	scanf ("%d",&n);
	int a[n];
	if (n>= 2 && n<= 1000)
	{
		for (i=0; i<n; i++)
		{
			scanf ("%d",&a[i]);
		}
		for (j=0; j<n; j++)
		{
			if (j==0)
			{
				max=a[j];
			}
			if (max<a[j])
			{
				max=a[j];
			}
		}
		for (i=0; i<n; i++)
		{
			if (max==a[i])
			{
				l=i+1;
				break;
			}
		}
	}
	for (i=0; i<j; i++)
		printf ("%d %d",l,max);
	return 0;
	
}
