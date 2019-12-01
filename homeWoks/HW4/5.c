#include <stdio.h>
long int n, nod, ghahr, i, a;
char sgn;
int main()
{
	scanf("%d%d", &n, &nod);
	for (i=0; i<n; i++)
	{
		getchar();
		scanf("%c", &sgn);
		getchar();
		scanf("%ld", &a);
		if (sgn=='-') a*=-1;
		if (nod+a<0) ghahr++;
		else nod+= a;
	}
	printf("%ld %ld", nod, ghahr);
	return 0;
}