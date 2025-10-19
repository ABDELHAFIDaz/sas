#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 25

typedef struct{
    char titre[MAX_SIZE], auteur[MAX_SIZE];
    int annee;
}livre;

int main(){
    int userInput;

    printf("combien de livre(s): ");
    scanf("%d", &userInput);

    livre *bibliotheque = malloc(userInput * sizeof(livre));

    for(int i = 0; i < userInput; i++){
        printf("\n=========== Livre %d ===========\n\n", i + 1);
        printf("Titre: ");
        scanf("%s", bibliotheque[i].titre);
        printf("Auteur: ");
        scanf("%s", bibliotheque[i].auteur);
        printf("annee: ");
        scanf("%d", &bibliotheque[i].annee);
    }

    printf("\n==================================\n");

    livre swap;
    for(int j = 1; j < userInput; j++){
        for(int i = 0; i < userInput - j; i++){
            if(bibliotheque[i].annee > bibliotheque[i + 1].annee){
                swap = bibliotheque[i];
                bibliotheque[i] = bibliotheque[i + 1];
                bibliotheque[i + 1] = swap;
            }
    }
    }

    for(int i = 0; i < userInput; i++){
        printf("\nlivre %d : ", i + 1);
        printf("Titre: %s, ", bibliotheque[i].titre);
        printf("Auteur: %s, ", bibliotheque[i].auteur);
        printf("Annee: %d\n", bibliotheque[i].annee);
    }


    return 0;
}