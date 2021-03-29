#include <stdio.h>
int main ()
{
	int n,i,max,j,l;
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
			else if (max<a[j])
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
	if (a[j] < a[i])
		printf ("%d %d",l,max);
	return 0;
	
}
