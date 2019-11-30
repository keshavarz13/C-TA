#include <stdio.h>
int main(){
    int i;
    for(i = 0; i < 10; i++){
        if(i >= 5)
        continue;
        switch(i % 3){
            case 0:
                printf("case 0\n");
                break;
            case 1:
            case 2:
                printf("case 1\n");
                break;
            default:
                printf("case default \n");
        }
    }
    return 0;
}




