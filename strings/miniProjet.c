#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

void menu();
int  addContact(char contacts[][MAX_SIZE], int index);
void printAllContacts(char contacts[][MAX_SIZE], int index);
int  searchContact(char contacts[][MAX_SIZE], int index);
int  checker(char contacts[][MAX_SIZE], int index);

int main(){
    char contacts[MAX_SIZE][MAX_SIZE];
    int choice, index = 0, contact;

    do
    {
        menu();
        
        printf("Choix : ");
        scanf("%d", &choice);
        
        switch(choice){
            case 1:
                index = addContact(contacts, index);
                break;
            case 2:
                printAllContacts(contacts, index);
                break;
            case 3:
                contact = searchContact(contacts, index);
                if(contact > -1){
                    printf("_______________________________________________________\n");
                    printf("%s : ", contacts[contact]);
                    printf("%s\n", contacts[contact + 1]);
                    printf("_______________________________________________________\n");
                }
                else
                    printf("Existe pas!\n");
                break;
            case 4:
                printf("Au voir!\n");
                break;
            default:
                printf("Invalid input!\n");
        }
        
    } while (choice != 4);
    
}
//
void menu(){
    printf("\n--- Gestionnaire de Contacts ---\n\n");
    printf("1. Ajouter un contact\n");
    printf("2. Afficher tous les contacts\n");
    printf("3. Rechercher un contact\n");
    printf("4. Quitter\n");
}
//
int addContact(char contacts[][MAX_SIZE], int index){
    int trys = 0;

    do{
        if(trys)
            printf("Vous avez déjà ce nom dans vos contacts, essayer à nouveau!\n");
        printf("Nom : ");
        scanf("%s", contacts[index]);

        trys = 1;

    }while(checker(contacts, index) == 0 && index != 0);

    index++;
    printf("Numero telephone: ");
    scanf("%s", contacts[index++]);
    printf("\nContact ajoute avec succes!\n");

    return index; // to know where we are in terms of inputing, and how much to input
}
//
void printAllContacts(char contacts[][MAX_SIZE], int index){
        printf("_______________________________________________________\n");
        printf("Les noms                    |Les numeros\n");
        printf("_______________________________________________________\n");

    for(int i = 0; i < index; i++){
        printf("%s                        |", contacts[i++]);
        printf(" %s\n", contacts[i]);
        printf("_______________________________________________________\n");
    }
}
//
int searchContact(char contacts[][MAX_SIZE], int index){
    char search[MAX_SIZE];

    printf("Qui recherchez-vous? ");
    scanf("%s", search);

    for(int i = 0; i < index; i += 2){ // +2 to skip the numbers
        if(strcmp(search, contacts[i]) == 0)
            return i; // returns the index of the contact he is searching for
    }

    return -1; // because the first element of the array starts from 0;
}
//
int  checker(char contacts[][MAX_SIZE], int index){
    for(int i = 0; i < index; i += 2){
        if(strcmp(contacts[index], contacts[i]) == 0)
            return 0;
    }

    return 1;
}