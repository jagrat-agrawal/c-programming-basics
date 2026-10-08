#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand(time(0)); // Initialize random number generator
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int number_of_guesses;
    int guessed_number;
    do{
        printf("guess the random number: \n");
        scanf("%d",&guessed_number);
        if(guessed_number < randomNumber){
            printf("enter higher number please! \n");

        }
        else if(guessed_number > randomNumber){
            printf("enter lower number please! \n");

        }
        else{
            printf("congrats!");
        }
        number_of_guesses++;
    } while (guessed_number != randomNumber);
    printf("You guessed the number in %d guesses \n",number_of_guesses);
    return 0; 
}