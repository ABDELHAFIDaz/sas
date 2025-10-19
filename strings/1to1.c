#include <stdio.h>
#include <string.h>
#include <ctype.h>

int largest(char str[], int size);
int counter(char str[], int size);

int main() {
    
    char str[100];
    int words, largestWord;
    
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strlen(str)- 1] = '\0';
        
    words= counter(str, strlen(str));
    printf("Number of word(s) in the string is: %d\n", words);

    largestWord = largest(str, strlen(str));
    printf("Number of character(s) the largest word has is: %d\n", largestWord);
    
    return 0;
    
}

int largest(char str[], int size){ // returns the number of characters in the largest word
    int big = 0, counter = 0;
    for(int i = 0;i < size; i++){
        if(str[i] == ' ' || str[size - 1] == str[i]){
            if(str[size - 1] == str[i])
            counter++;
            if(counter > big){
                big = counter;
            }
            counter= 0;
        }
        else {
            counter++;
        }   
    }
    return big;
}

int counter(char str[], int size){ // Returns the number of words in a string
    int counter = 1;
    for(int i = 0; i < size; i++){
        if(str[i] == ' ')
            counter++;
        }
        return counter;
    }