#include <stdio.h>
#define MAX_SIZE 25

void menu();
int fillGrades(float grades[]);
void printGrades(float grades[], int size);
float getAverage(float grades[], int size);
float getMaxGrade(float grades[], int size);
float getMinGrade(float grades[], int size);

int main(){
    int numberOfGrades;
    float average, maxGrade, minGrade, grades[MAX_SIZE];
    int choice;

    printf("\n============== Grade manager ==============\n\n");
    numberOfGrades = fillGrades(grades);
    
    do{
        menu();

        printf("Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:

                printf("\n==============================================\n");
                printf("les notes:\n");
                printGrades(grades, numberOfGrades);
                break;

            case 2:

                printf("\n==============================================\n");
                printf("La moyenne:\n");
                average = getAverage(grades, numberOfGrades);
                printf("%.2f\n", average);
                break;

            case 3:

                printf("\n==============================================\n");
                printf("La note maximale:\n");
                maxGrade = getMaxGrade(grades, numberOfGrades);
                printf("%.2f\n", maxGrade);
                break;

            case 4:

                printf("\n==============================================\n");
                printf("La note minimale:\n");
                minGrade = getMinGrade(grades, numberOfGrades);
                printf("%.2f\n", minGrade);
                break;

            case 5:

                printf("\n==============================================\n");
                
                printf("Les notes:\n");
                printGrades(grades, numberOfGrades);
                
                printf("==============================================\n");
                
                printf("La moyenne:\n");
                average = getAverage(grades, numberOfGrades);
                printf("%.2f\n", average);
                
                printf("==============================================\n");
                
                printf("La note maximale:\n");
                maxGrade = getMaxGrade(grades, numberOfGrades);
                printf("%.2f\n", maxGrade);
                
                printf("==============================================\n");
                    
                printf("La note minimale:\n");
                minGrade = getMinGrade(grades, numberOfGrades);
                printf("%.2f\n", minGrade);

                break;

            case 6:

                printf("\n==============================================\n");
                numberOfGrades = fillGrades(grades);
                break;

            case 7:

                printf("Au revoir!\n");
                break;

            default:

                printf("\n==============================================\n");
                printf("Invalide input\n");
        }
        
    }while(choice != 7);
    
    return 0;
}

void menu(){
    printf("\n============== Grade manager ==============\n\n");
    printf("1. Afficher tous les notes.\n");
    printf("2. La moyenne.\n");
    printf("3. La note maximale.\n");
    printf("4. La note minimale.\n");
    printf("5. All.\n");
    printf("6. Resaisissir les notes.\n");
    printf("7. Exit.\n");
}

int fillGrades(float grades[]){
    int numberOfGrades;

    do{
        printf("Saisissez le nombre de notes à saisir(0 < X < 15): ");
        scanf("%d", &numberOfGrades);
    } while(numberOfGrades < 1 || numberOfGrades > 15);

    for(int i = 0; i < numberOfGrades; i++){
        do
        {
            printf("Note%d: ", i + 1);
            scanf("%f", &grades[i]); 
        } while (grades[i] < 0 || grades[i] > 20); 
    }

    return numberOfGrades;
}

void printGrades(float grades[], int size){
    for(int i = 0; i < size; i++){
        printf("%.2f    ", grades[i]);
    }
    printf("\n");
}

float getAverage(float grades[], int size){
    float sum = 0.f;

    for(int i = 0; i < size; i++){
        sum += grades[i];
    }

    return (sum / size);
}

float getMaxGrade(float grades[], int size){
    float maxGrade = grades[0];

    for(int i = 1; i < size; i++){
        if(grades[i] > maxGrade){
            maxGrade = grades[i];
        }
    }

    return maxGrade;
}

float getMinGrade(float grades[], int size){
    float minGrade = grades[0];

    for(int i = 1; i < size; i++){
        if(grades[i] < minGrade){
            minGrade = grades[i];
        }
    }

    return minGrade;
}
