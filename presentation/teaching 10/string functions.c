#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
   
    /**
     
     */
    char str[] = "This is test"; 
    char str1[10]={'a', 'b', '\0', 'c', '\0'};
    printf("%d\n", strlen(str));
    printf("%d", strlen(str1));

    /**
        strcmp(str1, str2):compare str1 and str2
        If(str1 == str2)  return 0
        If(str1 < str2)  return -1
        If(str1 > str2)  return 1
    */
    char s1[] = "abc";
    char s2[] = "abc";
    int i = strcmp(s1, s2);
    printf("%d\n" , i);
    //strcmpi(str1, str2)

    strcat(dst, src);
    

}