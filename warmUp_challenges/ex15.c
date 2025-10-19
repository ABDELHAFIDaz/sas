#include <stdio.h>
#include <math.h>

int main(){
    int userInput, copyOfUserInput, sum, power;
    sum = power = 0;

    printf("Input a number to check if Armstrong: ");
    scanf("%d", &userInput);

    copyOfUserInput = userInput;

    // To determine the exponent
    while(userInput != 0){
        userInput /= 10;
        power++;
    }

    // To restore the the value of userInput
    userInput = copyOfUserInput;

    // for the sum
    while(userInput != 0){
        sum += pow((userInput % 10), power);
        userInput /= 10;
    }

    if(copyOfUserInput == sum){
        printf("Armstrong!\n");
    }
    else{
        printf("Not Armstrong!\n");
    }

    return 0;
}