#include <stdio.h>
#define MAX_SIZE 25

typedef struct{
    char titre[MAX_SIZE], auteur[MAX_SIZE];
    int annee;
}livre;

void printLivre(livre livre1);

int main(){
    livre livre1 = {"Algorithmes", "Cormen", 1990};
    
    printLivre(livre1);

    return 0;
}

void printLivre(livre livre1){

    printf("Titre: %s, ", livre1.titre);
    printf("Auteur: %s, ", livre1.auteur);
    printf("Annee: %d\n", livre1.annee);
    
}