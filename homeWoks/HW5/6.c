#include <stdio.h>
long long int n;
long int reverse(long int a)
{
	long int b=0;
	while (a>=1) b+=a%10, a/=10, b*=10;
	return b/10;
}
int primeCheck(long int a)
{
	if (a==1 || a==0) return 0;
	for (int i=2; i<a; i++)
		if (a%i==0)
			return 0;
	return 1;
}
int main()
{
	scanf("%ld", &n);
	while (reverse(n)!=n || !primeCheck(n))	n++;
	printf("%ld", n);
	return 0;
}
