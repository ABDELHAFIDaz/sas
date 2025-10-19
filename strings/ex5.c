#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20

int main(){
    char array[MAX_SIZE];
    int size;

    printf("Enter an array: ");
    fgets(array, MAX_SIZE, stdin);
    size = strlen(array) - 1;
    array[size] = '\0';

    printf("Longueur: %d\n", size);

    return 0;
}