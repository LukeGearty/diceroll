#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*A quick program for D&D dice rolls*/

int main() {
    //the seed for random numbers
    srand(time(0));
    //prompt user to select the number of dice they want to roll
    int playerChoice;
    printf("Enter the number of sides the dice you want to roll has: ");
    scanf("%d",&playerChoice);
    //print out the random roll
    int diceRoll = rand() % playerChoice + 1;
    printf("%d", diceRoll);

    return 0;
}