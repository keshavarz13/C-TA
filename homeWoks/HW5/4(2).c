#include <stdio.h>
int primeCheck(long int a)
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
		if (primeCheck(i) && a%i==0)	return i;
}
long int n;
int main()
{
	scanf("%ld", &n);
	while (n!=1)
	{
		printf("%ld\n", largest_factor(n));
		n/=largest_factor(n);
	}
	return 0;
}
