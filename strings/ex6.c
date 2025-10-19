#include <stdio.h>
#include <string.h>
#define MAX_SIZE 20

void stringCopy(char source[], char copiee[], int size);

int main(){
    char source[MAX_SIZE] = "Hello";
    char copiee[MAX_SIZE];

    stringCopy(source, copiee, strlen(source));
    
    printf("Chaine source: %s\n", source);
    printf("Chaine copiee: %s\n", copiee);
    
    return 0;
}
void stringCopy(char source[], char copiee[], int size){
    for(int i = 0; i < size; i++){
        copiee[i] = source[i];
    }
}