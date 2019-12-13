#include <stdio.h>
long int rec(long int a)
{
	if (a==0 || a==1) return 1;
	else return rec(a-1)+rec(a-2);
}

int main()
{
	long int n;
	scanf("%ld", &n);
	printf("%ld", rec(n));
	return 0;
}
