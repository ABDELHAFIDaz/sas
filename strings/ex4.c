#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20

void concatenation(char array1[], char array2[], char buffer[]);

int main(){
    char array1[MAX_SIZE], array2[MAX_SIZE], buffer[(MAX_SIZE * 2) + 2];
    
    printf("Chaine 1: ");
    fgets(array1, MAX_SIZE, stdin);
    array1[strlen(array1) - 1] = '\0';
    
    printf("Chaine 2: ");
    fgets(array2, MAX_SIZE, stdin);
    array2[strlen(array2) - 1] = '\0';

    concatenation(array1, array2, buffer);

    printf("%s\n", buffer);

    return 0;
}

void concatenation(char array1[], char array2[], char buffer[]){
    buffer[0] = '\0';
    strncpy(buffer, array1, MAX_SIZE - 1);
    strcat(buffer, " ");
    strncat(buffer, array2, MAX_SIZE - 1);
}