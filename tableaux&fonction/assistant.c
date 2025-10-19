#include <stdio.h>

void afficherTableau(int array[], int size);

int main(){
    int numbers[] = {21, 134, 342, 523, 54, 532};

    int sizeOfNumbers = sizeof(numbers) / sizeof(numbers[0]);

    afficherTableau(numbers, sizeOfNumbers);

    return 0;
}
void afficherTableau(int array[], int size){
    for(int i = 0; i < size; i++){
        printf("%d  ", array[i]);
    }
    printf("\n");
}