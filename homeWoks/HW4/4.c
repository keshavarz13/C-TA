#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int);

int main()
{
    int n,i;
    bool ans=false;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        if(check(n-(int)pow(i,2))==true)
        {
            ans=true;
            break;
        }
    }
    printf(ans? "true":"false");
    return 0;
}

bool check(int x){
    if(pow((int)sqrt(x),2)==x)
        return true;
    return false;
}
