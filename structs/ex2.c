#include <stdio.h>
#define MAX_SIZE 25

typedef struct{
    char titre[MAX_SIZE], auteur[MAX_SIZE];
    int annee;
}livre;

int main(){
    livre livre1 = {"Algorithmes", "Cormen", 1990};
    livre livre2 = {"Java", "Gosling", 1995};
    livre livre3 = {"C", "Kernighan", 1978};
    livre livre4 = {"Python", "Rossum", 1991};
    livre livre5 = {"C++", "Stroustrup", 1985};

    livre livres[] = {livre1, livre2, livre3, livre4, livre5};

    for(int i = 0; i < 5; i++){
        printf("livre %d : ", i + 1);
        printf("Titre: %s, ", livres[i].titre);
        printf("Auteur: %s, ", livres[i].auteur);
        printf("Annee: %d\n", livres[i].annee);
    }

    return 0;
}