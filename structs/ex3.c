#include <stdio.h>
#define MAX_SIZE 25

typedef struct{
    char titre[MAX_SIZE], auteur[MAX_SIZE];
    int annee;
}livre;

int main(){
    livre livre1 = {"Algorithmes", "Cormen", 1990};
    int *ptr = &livre1.annee;

    printf("Avant: Annee: %d\n", livre1.annee);
    *ptr = 2025;
    printf("Apres: Annee: %d\n", livre1.annee);

    return 0;
}