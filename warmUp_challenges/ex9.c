#include <stdio.h>

int main(){
    int number;
    int sum = 0;

    printf("Input N, find sum of first N numbers.\n");
    printf("N: ");
    scanf("%d", &number);
    
    for(int i = 1; i < (number + 1); i++){
        sum += i;
    }

    printf("Output: %d\n", sum);

    return 0;
}