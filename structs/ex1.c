#includ <stdio.h>
#define MAX_SIZE 25

typedef struct{
    char titre[MAX_SIZE], auteur[MAX_SIZE];
    int annee;
}livre;

int main(){
    livre livre1 = {"Algorithmes", "Cormen", 1990};

    printf("Titre: %s, ", livre.titre);
    printf("Auteur: %s, ", livre.auteur);
    printf("Annee: %d\n", livre.annee);

    return 0;
}