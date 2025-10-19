#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100

int counter(char array[], int size);

int main(){
    char array[MAX_SIZE];
    int size, voyellesCounter;

    printf("Entrez une chaine: ");
    fgets(array, MAX_SIZE, stdin);

    size = strlen(array) - 1; // to not count the '\n'

    array[size] = '\0'; // to remove the '\n'

    voyellesCounter = counter(array, size);

    printf("Nombre de voyelles: %d\n", voyellesCounter);

    return 0;
}

int counter(char array[], int size){
    char voyelles[] = "aeiouy";
    int counter = 0;

    for(int i = 0; i < size; i++){ // for the userInput
        for(int j = 0; j < 6;j++){ // for the voyelles
            if(array[i] == voyelles[j])
                counter++;
        }
    }

    return counter;
}