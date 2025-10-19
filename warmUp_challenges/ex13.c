#include <stdio.h>
#include <string.h>

int main(){
    char number[20];

    printf("Input an integer to reverse its digits: ");
    scanf("%s", number);

    int sizeOfArray = strlen(number);

    while (sizeOfArray > 0)
    {
        printf("%c", number[(sizeOfArray - 1)]);
        sizeOfArray--;
    }
    
    return 0;
}