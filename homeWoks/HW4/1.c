#include <stdio.h>

int main()
{
	long int n, m, i, j, t, max, s, c;
	scanf("%ld", &n);
	long int x[n], y[n];
	for (i=0; i<n; i++)	
        scanf("%ld%ld", &x[i], &y[i]);

    for (i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			s=0;
			if (x[i]-x[j]!=0)
			{
				m= (y[i]-y[j])/(x[i]-x[j]);
                c= y[i]-(m*x[i]);
				for (t=0; t<n; t++)
					if ((x[t]*m + c) == y[t])
                    	s++;
			else
			{
				for (t=0; t<n; t++)
					if ((x[t]) == x[i])	s++;	
			}
			if (s>max) max=s;
		}
	}

	if (n!=1)
    	printf("%ld", max);
	else
        printf("1");

	return 0;
}