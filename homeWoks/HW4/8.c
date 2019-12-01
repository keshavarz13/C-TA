#include <stdio.h> 

/**
 if h = 1:
   f(n) = f(10^b - 1) + f(n - 10^b) + n - 10^b + 1
else:
   f(n) = h * f(10^b - 1) + f(n - h * 10^b) + 10^b
*/

long CountOne2(long n)
{
    if (n == 0)
        return 0;
    if (n < 10)         
        return 1;  
 
    long count = 0;     
    long highest = n;   
    int weight = 1;     
    while (highest >= 10)
    {
        highest /= 10;
        weight *= 10;
    }
    if (highest == 1)
    {
        count = CountOne2(weight - 1)
                + CountOne2(n - weight)
                + n - weight + 1;
    }
    else
    {
        count = highest * CountOne2(weight - 1)
                + CountOne2(n - highest * weight)
                + weight;
    }
    return count;
}

int main () { 
    long n ; 
    scanf("%ld" , &n); 
    printf("%ld" , CountOne2(n));
    return 0 ; 
}