// Recherche Binaire
#include <stdio.h>

int rechercheBinaire(int array[], int size, int userInput);

int main(){
    int array[] = {1, 2, 4, 7, 9};
    int userInput, position;

    printf("What number are you looking for? ");
    scanf("%d", &userInput);

    position = rechercheBinaire(array, 5, userInput);

    if(position != -1)
        printf("Recherche de %d: Position %d\n", userInput, position);
    else
        printf("Recherche de %d: Non trouve\n", userInput);

    return 0;
}

int rechercheBinaire(int array[], int size, int userInput){
    for(int i = 0; i < size; i++){
        if(array[size/2] == userInput)
            return size/2;
        else if(array[size/2] > userInput)
            size /= 2;
        else{
            i = size / 2;
            size /= 2;
        }
    }
    return -1;
}
