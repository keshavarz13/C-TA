#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int len(int);

int main()
{
    int n,r,i,l;
    scanf("%d",&n);
    for(l=len(n)-1;l>=0;l--){

        r=(int)(n/pow(10,l))%10;
        printf("%d: ",r);

        for(i=0;i<r;i++)
            printf("%d",r);
            
        printf("\n");
    }
    return 0;
}

int len(int x){
    int i=0;
    while(x>0){
        i++;
        x/=10;
    }
    return i;
}
