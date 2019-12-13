#include <stdio.h>

int main()
{
	long long int n, d = 0, x = 0 , counter = 0 , max = 0 , flag = 0 ;
	scanf("%ld", &n);
	while (n>=1)
	{
		if (n%2==1) 
		{
			if (flag==0){
				flag=1;
				x= counter;
			} 
			else{
				d= counter-x;
				x= counter;
			}	
		}
		counter++;
		max= (d>max)? d : max, n/=2;
	}
	printf("%ld", max);
	return 0;
}
