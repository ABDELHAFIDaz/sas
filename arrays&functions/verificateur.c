#include <stdio.h>

int main(){
   int userInput, counter;
   int numbers[] = {12, 2, 3, 22, 5, 54, 10, 8, 33, 100};

   printf("Enter a number: ");
   scanf("%d", &userInput);

   counter = 0;
   
   for(int i = 0; i < 10; i++){
      if(userInput == numbers[i]){
         counter++;
      }
   }

   if(counter == 0){
      printf("%d est pas present dans le tableau\n", userInput);
   }
   else{
      printf("%d est present dans le tableau %d fois\n", userInput, counter);
   }

   return 0;
}