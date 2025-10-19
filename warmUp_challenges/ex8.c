#include <stdio.h>

int main(){
    int number;

    printf("Input N, print numbers 1 to N\n");
    printf("N: ");
    scanf("%d", &number);

    if(number >= 1){
        for(int i = 1; i < (number + 1); i++){
            printf("%d ", i);
        }
    }
    else{
        printf("Enter a number that is >= 1!");
    }
    printf("\n");


    return 0;
}