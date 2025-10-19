#include <stdio.h>

int main(){
    int number;

    printf("\nInput a number, print its multiplication table (1-10).\n\n");

    printf("Enter a number: ");
    scanf("%d", &number);

    for(int i = 1; i < 11; i++){
        printf("%d * %d = %d\n", number, i,(number * i));
    }

    return 0;
}