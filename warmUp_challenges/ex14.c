#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool palindrome(char array[], int sizeOfArray);

int main(){
    char userInput[20];
    
    printf("Check if a number is palindrome: ");
    scanf("%s", userInput);
    
    int sizeOfArray = strlen(userInput);
    
    if(palindrome(userInput,sizeOfArray)){
        printf("Palindrome\n");
    }
    else{
        printf("Not palindrome\n");
    }
    
    return 0;
}

bool palindrome(char array[], int sizeOfArray){
    char *left = &array[0];
    char *right = &array[(sizeOfArray - 1)];
    while(left <= right){
        if(*left != *right){
            return false;
        }
        left++;
        right--;
    }
    return true;
}