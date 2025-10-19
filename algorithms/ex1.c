// Recherche Linéaire
#include <stdio.h>

int recherche(int array[], int size, int userInput);

int main(){
    int array[] = {4, 2, 7, 1, 9};
    int userInput, position;

    printf("What number are you looking for? ");
    scanf("%d", &userInput);

    position = recherche(array, 5, userInput);

    if(position != -1)
        printf("Recherche de %d: Position %d\n", userInput, position);
    else
        printf("Recherche de %d: Non trouve\n", userInput);

    return 0;
}

int recherche(int array[], int size, int userInput){
    for(int i = 0; i < size; i++){
        if(array[i] == userInput)
            return i;
    }
    return -1;
} 