#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int n,i,x=0;
    double r, p = 5;
    srand(time(NULL));
    scanf("%d",&n);
    printf("%d",0);
    for(i=0;i<n;i++)
    {
        printf("\n");
        r=rand()%10;
        if(r>=p)
            x+=1;
        else
            x-=1;
        printf("%d",x);

    }
    return 0;
}
