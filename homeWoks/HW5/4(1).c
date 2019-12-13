#include <stdio.h>

int prime(long int a)
{
	if (a==1 || a==0) return 0;
	for (int i=2; i<a; i++)
		if (a%i==0)
			return 0;
	return 1;
}

long int largest_factor(long int a)
{
	for (int i=a; i>1; i--)
		if (prime(i) && a%i==0)	return i;
}
long int x, y, gcd=1;
int main()
{
	scanf("%ld%ld", &x, &y);
	while (x>1)
	{
		if (y % largest_factor(x)==0)
		{
			gcd *= largest_factor(x);
			y /= largest_factor(x);
		} 
		x /= largest_factor(x);
	}
	printf("%ld", gcd);
	return 0;
}
