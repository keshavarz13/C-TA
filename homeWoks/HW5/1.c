#include <stdio.h>

int main()
{
	long long int a[4], sum;
	for (int i=0; i<4; i++)	
	{
		scanf("%d", &a[i]);
		sum+= a[i];	
	}
	for (int i=0; i<4; i++)
		if (a[i]!=sum/3) 
            printf("%d ", (sum/3) - a[i]);
	return 0;
}
