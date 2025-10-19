#include <stdio.h>

void inverse(char array[], int size);

int main(){
    char string[] = "Hello"; // the size is 6 bc of the '\0';

    inverse(string, 5);

    printf("%s\n", string);

    return 0;
}

void inverse(char array[], int size){
    char temp;
    int left = (size - 1);

    for(int i = 0; i < (size / 2); i++){
        temp = array[i];
        array[i] = array[left];
        array[left] = temp;
        left--;
    }
}