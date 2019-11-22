#include <math.h>
#include <stdio.h>
int main (){
    int a,b,c,d,e,f,g,h,s,x1,x2,y1,y2;
    scanf ("%d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h);
    x1=fmax (fmin (a,c),fmin (e,g));
    x2=fmin (fmax (a,c),fmax (e,g));
    y1=fmax (fmin (b,d),fmin (f,h));
    y2=fmin (fmax (b,d),fmax (f,h));
    s= (x2-x1)*(y2-y1);
    printf ("%d",s);
    return 0;
}
