#include <stdio.h>
#include <math.h>
int main ()
{
    int x1,x2,x3,x4,y1,y2,y3,y4; double l1,l2,l3,l4,d,d2;
    scanf ("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
        l1=(pow((x1-x2),2)+pow((y1-y2),2));
        l2=(pow((x3-x2),2)+pow((y3-y2),2));
        l3=(pow((x3-x4),2)+pow((y3-y4),2));
        l4=(pow((x1-x4),2)+pow((y1-y4),2));
        d=(pow((x1-x3),2)+pow((y1-y3),2));
        d2=(pow((x2-x4),2)+pow((y2-y4),2));
    if ((l1==l2)&&(l3==l2)&&(l3==l4)&&(l1==l4)&&(d==d2) ) {
        printf ("true");}
    else {
        printf ("false");}
    return 0;
}