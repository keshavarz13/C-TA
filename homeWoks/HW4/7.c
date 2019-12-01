#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
long int n, d, b, score, stat, c;
int main()
{
	srand(time(0));
	scanf("%ld%ld", &n, &d);	
	while (1)
	{
		for (c=0; c<5; c++)
		{
			score=0;
			long int a[n];
			for (int i=0; i<n; i++)
			{
				a[i]= (rand()%(int)((pow(10, d)-pow(10, (d-1)))-1))+pow(10, (d-1));
				printf("%ld ", a[i]);
			}
			printf("\n");
			for (int i=0; i<n; i++)
			{
				scanf("%ld", &b);
				if (b==a[i])
				{
					printf("Correct :) :D\n");
					score++;
				}
				else printf("Incorrect :( :P\n");
			}
			printf("%.2f\n", (float)score/n);
		}
		printf("1)Continue\n2)Increase numbers\n3)Increase digits\n4)End\n");
		scanf("%ld", &stat);
		switch(stat)
		{
			case 2:
				n++;
				break;
			case 3: 
				d++;
				break;
			case 4:
				return 0;
		}
	}
	return 0;
}