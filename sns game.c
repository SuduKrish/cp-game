#include <stdio.h>
#include <stdlib.h>


// Function to roll a dice and return a random number between 1 and 6
int rollDice() {
    return (rand() % 6) + 1;
}

// Function to check for snakes and ladders and update the player's position
int checkSnakesAndLadders(int currentPos) {
    int result;
    switch (currentPos) {
        case 3:
            result+=22;
            break;
        case 5:
            result+=8;
            break;
         case 11:
            result+= 26;
             break;
        case 17:
            result+= 4;
             break;
        case 19:
            result+= 7;
             break;
        case 21:
            result+= 9;
             break;
        case 27:
            result+= 1;
             break;
        case 20:
            result+= 29;
             break;
        case 25:
            result+= 16;
             break;
        case 31:
            result+= 37;
             break;
        case 35:
            result+= 49;
             break;
        case 47:
            result+= 22;
             break;
        case 50:
            result+= 12;
             break;
        case 55:
            result+= 43;
             break;
        case 59:
            result+= 2;
             break;
        case 44:
            result+= 32;
             break;
        default:
            result+= currentPos;

    }
    if(currentPos<result)
    printf("the player climbed a ladder from %d to %d\n",currentPos,result);
    if(currentPos>result)
    printf("player went down the snake from %d to %d\n",result,currentPos);
    return result;
}

int main() {

    printf("Welcome to Snakes and Ladders!\n");


    int player1 = 0, player2 = 0;
    int currentPlayer = 1;
    int dice;

    while (player1 < 50 && player2 < 50) {
        // Switch players
        if (currentPlayer == 1) {
            printf("Player 1's turn (Press Enter to roll the dice): ");
            getchar();
            dice = rollDice();
            printf("You rolled a %d.\n", dice);
            player1 += dice;
            player1 = checkSnakesAndLadders(player1);
            printf("Player 1 is at position %d.\n", player1);
            currentPlayer = 2;
        } else {
            printf("Player 2's turn (Press Enter to roll the dice): ");
            getchar();
            dice = rollDice();
            printf("You rolled a %d.\n", dice);
            player2 += dice;
            player2 = checkSnakesAndLadders(player2);
            printf("Player 2 is at position %d.\n", player2);
            currentPlayer = 1;
        }
    }

    if (player1 >= 50)
        printf("Player 1 wins!\n");
    else
        printf("Player 2 wins!\n");

    return 0;
}
