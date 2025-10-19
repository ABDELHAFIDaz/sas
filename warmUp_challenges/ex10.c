#include <stdio.h>

int main(){
    int number, factorial;
    factorial = 1;

    printf("Enter a number to calculate it factorial: ");
    scanf("%d", &number);

    if(number == 0){
        printf("0! = 1\n");
    }
    else if(number > 0){
        for(int i = 1; i < (number + 1); i++){
            factorial *= i;
        }
        printf("%d! = %d\n", number, factorial);
    }
    else{
        printf("Enter a number that is >= 0!\n");
    }

    return 0;
}

