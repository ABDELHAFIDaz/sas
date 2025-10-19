#include <stdio.h>

int main(){
    int num1, num2;

    printf("\nInput two numbers and print their sum, difference, product, and quotient.\n\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("i.   Sum = %d\n", (num1 + num2));
    printf("ii.  Difference = %d\n", (num1 - num2));
    printf("iii. Product = %d\n", (num1 * num2));
    if(num2 != 0){
        printf("iv.  Quotient = %.2lf\n", (num1 / (float)num2));
    }
    else {
        printf("iv.  You can not divide by 0!\n");
    }

    return 0;
}