#include <stdio.h>

int main(){
    int userInput, counter;
    counter = 0;

    printf("Input a number, check if prime: ");
    scanf("%d", &userInput);

    for(int i = 2; i < (userInput /2); i++){
        if((userInput % i) == 0){
            counter++;
            break;
        }
    }

    if(counter == 0){
        printf("%d is a prime number.\n", userInput);
    }
    else{
        printf("%d is not a prime number.\n", userInput);
    }

    return 0;
}