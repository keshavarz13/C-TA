#include <stdio.h>
#include <math.h>
int main (){
    int n;
    double r;
    scanf ("%d",&n);
    r= log2(n);
    if ((int)r == r)
        printf ("%g",r);
    else
        printf ("%d",(int)r+1);
    return 0;
}