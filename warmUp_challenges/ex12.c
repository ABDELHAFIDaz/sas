#include <stdio.h>

int main(){
    int fibonacci = 0;
    int numberOfTerms;
    int firstValue, secondValue;
    firstValue = 0;
    secondValue = 1;

    printf("Enter N terms of Fibonacci series\n");
    printf("N: ");
    scanf("%d", &numberOfTerms);

    printf("0 ");
    while(1 < numberOfTerms){
        firstValue = secondValue;
        secondValue = fibonacci;
        fibonacci = firstValue + secondValue;
        printf("%d ", fibonacci);
        numberOfTerms--;
    }
    printf("\n");

    return 0;
}