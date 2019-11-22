#include <stdio.h>
#include <math.h>
int main (){
    int n;
    double r,b;
    scanf ("%d",&n);
    r= log2(n);
    b = r-(int)r;
    
    if (b==0) {
        printf ("true");
    }
    else
    {
        printf ("false");
    }

    return 0;
}