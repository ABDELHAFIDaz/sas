#include <stdio.h>

int main(){
    int userInput;

    printf("\nInput an integer, check if even or odd\n\n");
    
    printf("Enter a number: ");
    scanf("%d", &userInput);

    if((userInput % 2) == 0){
        printf("%d is even\n", userInput);
    }
    else {
        printf("%d is odd\n", userInput);
    }

    return 0;
}