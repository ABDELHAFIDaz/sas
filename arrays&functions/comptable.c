#include <stdio.h>

float calculerMoyenne(float notes[], int size);

int main(){
    float notes[] = {12.32, 14.34, 17.32, 19, 9.96};
    int sizeOfNotes = sizeof(notes) / sizeof(notes[0]);
    
    float moyenne = calculerMoyenne(notes, sizeOfNotes);

    printf("La moyenne est: %.2f\n", moyenne);

    return 0;
}

float calculerMoyenne(float notes[], int size){
    float sum = 0.f;
    int counter = 0;

    for(int i = 0; i  < size; i++){
        sum += notes[i];
        counter++;
    }

    return (sum / (float) counter );
}