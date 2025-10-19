#include <stdio.h>
#define MAX_SIZE 25

typedef struct{
    int num;
    char rue[MAX_SIZE], city[MAX_SIZE];
}addresse;

typedef struct{
    char name[MAX_SIZE];
    addresse place;
}personne;

int main(){
    personne person1 = {"hafid", {123, "Rue Principale", "Paris"}};

    printf("Nom: %s, ", person1.name);
    printf("Adresse: %d %s, %s\n", person1.place.num, person1.place.rue, person1.place.city);

    return 0;
}