#include <stdio.h>

int max(int num1, int num2);

int main(){
    int num1, num2;

    printf("Enter two numbers to find who is the largest.\n");
    
    printf("Num1: \n");
    scanf("%d", &num1);
    
    printf("Num2: \n");
    scanf("%d", &num2);

    int largest = max(num1, num2);

    printf("%d is the largest.\n", largest);

    return 0;
}
int max(int num1, int num2){
    if(num1 > num2)
        return num1;
    else 
        return num2;
}