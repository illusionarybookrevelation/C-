#include <stdio.h>

int main()
{
    int i,j;
    for(i=3;i>0;i--){
        for(j=1;j<=3;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}