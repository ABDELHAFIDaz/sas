#include <stdio.h>

int main(){
    int num1, num2;

    printf("\nInput two numbers, we will print the larger one\n\n");

    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    if(num1 > num2){
        printf("%d is the largest.\n", num1);
    }
    else if(num1 < num2){
        printf("%d is the largest.\n", num2);
    }
    else {
        printf("They are equal.\n");
    }

    return 0;
}