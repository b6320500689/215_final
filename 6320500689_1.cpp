#include <stdio.h>
int main ()
{
	int n,c,k,a,b=0,y=1,x;
	int p[32750]={0};
	scanf ("%d %d",&n,&c);
	while (a!=0)
	{
		p[b]=a%10;
		a=a/10;
		b++;
		
	}
	while (y)
	{
		n++;
		b=0;
		a=n;
		
		while (a!=0)
		{
			p[b]=a%10;
			a=a/10;
			if (c==p[b])
			{
				x=n;
				y=0;
				break;
			}
			b++;
		}
	}
	printf ("%d",x);
	return 0;
}
