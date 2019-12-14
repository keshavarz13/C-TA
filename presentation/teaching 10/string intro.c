#include <stdio.h> 

int main (){ 
	char str1[8] = "program";
	char str2[] = "program";
    char *str3  = "program"; //we will see later
    char str4[] = {'p', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};
    printf("%s\n", str3);
    char *str;
    scanf("%s" , str);
    printf("1 : %s\n", str);
    scanf("%s" , str);
    printf("2 : %s", str);

}