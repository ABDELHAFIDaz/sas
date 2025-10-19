#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int palindrome(char array[], int size);

int main(){
    char array[MAX_SIZE];
    int size;

    printf("Enter a string: ");
    fgets(array, MAX_SIZE, stdin);
    size = strlen(array) - 1;
    array[size] = '\0';

    if(palindrome(array, size))
        printf("C'est un palindrome !\n");
    else
        printf("C'est PAS un palindrome !\n");
    
    return 0;
}

int palindrome(char array[], int size){
    char left = size - 1;

    for(int i = 0; i < size; i++){
        if(array[i] != array[left]){
            return 0;
        }
        left--;
    }
    return 1;
}