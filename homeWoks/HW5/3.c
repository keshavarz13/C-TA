#include <stdio.h>

int main()
{
	int n;
	int x=2, y=1;
	int holdx, holdy;
	scanf("%d", &n);
	for (int i=0; i<n; i++)
	{
		holdx=x, holdy=y;
		x= holdx*holdx - holdy*holdy;
	 	y= 2*holdy*holdx;
	}
	printf("(%d, %d)", x, y);
	return 0;
}
