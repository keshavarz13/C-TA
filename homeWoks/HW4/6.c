#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,h,i,t=0;
    scanf("%d",&n);
    int arr[n];
    scanf("%d",&h);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]>h)
            t+=2;
        else
            t+=1;
    }

    printf("%d",t);
    return 0;
}
