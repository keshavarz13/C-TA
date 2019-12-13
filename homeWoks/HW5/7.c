#include <stdio.h>
long int func1(long int a)
{
	if (a==0 || a==1)	return 1;
	else return func1(a-1)+ func1(a-2);
}
long int func2(long int a)
{
	if (a==0 || a==1 || a==2)	return 1;
	else return func2(a-2)+ func2(a-3)-func2(a-1);
}
long int func3(long int a)
{
	if (a==0 || a==1)	return 1;
	else if (a==2)	return 2;
	else return 2*func3(a-2)- func3(a-1)+ func3(a-3);
}
long int n;
int main()
{
	scanf("%ld", &n);
	printf("%ld\n%ld\n%ld", func1(n), func2(n), func3(n));
	return 0;
}

