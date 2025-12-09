#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int lowest_num = 1;
    int highest_num = 100;
    int answer, guess;
    int guesses = 0;
    int is_running = 1;

    //random number
    srand(time(0));
    answer = (rand() % (highest_num - lowest_num + 1)) + lowest_num;

    printf("Welcome to number guessing game in C!\n");
    printf("I selected a number between %d to %d. Take a guess.\n\n",
           lowest_num, highest_num);

    while (is_running) {

        printf("Please enter the number between %d to %d: ",
               lowest_num, highest_num);

        
        if (scanf("%d", &guess) != 1) {
            
            while (getchar() != '\n');
            printf("Not a valid number. Please enter digits only!\n\n");
            continue;
        }

        guesses++;

        if (guess < lowest_num || guess > highest_num) {
            printf("Guess is out of range.\n\n");
            continue;
        }

        if (guess < answer) {
            printf("The guess is too LOW!!\n\n");
        }
        else if (guess > answer) {
            printf("The guess is too HIGH!!\n\n");
        }
        else {
            printf("\nYES!! YOU CRACKED IT.\n");
            printf("You took %d guesses to find the number %d.\n",
                   guesses, answer);
            is_running = 0;
        }
    }

    return 0;
}

