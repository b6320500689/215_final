#include <stdio.h>
int main ()
{
	int n,i,max,j;
	int a[i];
	scanf ("%d",&n);
	if (n>= 2 && n<= 1000)
	{
		for (i=0; i<n; i++)
		{
			scanf ("%d",&a[i]);
			i++;
		}
		max=a[0];
		for (i=1; i<n; i++)
		if (a[i]>=max)
		{
			max=a[i];
			j=i;
		}
		
	}
	
	printf ("%d",max);
	return 0;
	
}
