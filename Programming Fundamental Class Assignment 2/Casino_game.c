#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void Lines(void);
// This a Function which creates a line to make the program look more readable.
int compute_sum(void);
// This Function Creates a Sum of 2 random numbers between 0 and 10.
int get_rounds(void);
// This Function gets the rounds from a user that he/she wants to play.
int computer_guess(void);
// This Function Creates a Sum of 2 uniformly distributed numbers between 3 and 20.
int player_guess(void);
// This Function takes guess from player.
void player_capital(int playerguess, int flag);
// This Function maintains and upgrades player credit.
void computer_capital(int computerguess, int flag);
// This Function maintain and upgrades Machine'credit.
int play(int rounds);
// This function carries out the game, play around with the player and machine and maintain and update the rounds and call all other functions to do their task.
int credit;
// A global variable of player Credit that will be accessed by the functions.
int machine_credit;
// A global variable of the Machine's Credit which will be accessed by the functions.
int main(void)
{
    int checkmate, rounds = get_rounds();
    // Calling Function to get rounds from player
    checkmate = play(rounds);
    // Calling the play functions and storing the result in a variable with name checkmate/
    printf("\nNow time for final credit reveal\nYour credit is %d and machine %d credit\n", credit, machine_credit);
    // Printing out the credit status.
    if (checkmate == 0)
    {
        // Checking if the machine wins.
        Lines();
        printf("\n\nMachine wins %d\n", checkmate);
        Lines();
        printf("\n");
    }
    else if (checkmate == 1)
    {
        // Checking if the player wins.
        Lines();
        printf("\n\nYou wins %d\n", checkmate);
        Lines();
        printf("\n");
    }
    else if (checkmate == 2)
    {
        // Checking if Both lose.
        Lines();
        printf("\n\nMachine and you are both losers.\n");
        Lines();
        printf("\n");
    }
    // Ending the program.
    return 0;
}
int get_rounds(void)
{
    // This Function is just to ask rounds form the user
    int rounds;
    Lines();
    printf("\nHi there, Lets play a game.\n\nEnter a number for the rounds for want to play:");
    scanf("%d", &rounds);
    if (rounds == -1)
    {
        // Checking invalid entry.
        printf("\n-1\n");
        exit(0);
    }
    else
    {
        // Returning the valid entry.
        return rounds;
    }
}
int compute_sum(void)
{
    // Generating a Random sum of two numbers from the card.
    srand(time(NULL));
    return ((rand() % 11) + (rand() % 11));
}
int player_guess(void)
{
    // Taking the Guess from the player
    int guess;
    Lines();
    printf("\nEnter your sum of the card you would chose numbers:");
    scanf("%d", &guess);
    if (guess == -1)
    {
        // Checking to make sure the entry is valid.
        printf("\n-1\n");
        exit(0);
    }
    else if (guess > 20)
    {
        // Checking if follows the rules of the game.
        printf("\nKindly enter the guess in the limit of 20.\n");
        player_guess();
    }

    else
    {
        // Returning the valid guess.
        return guess;
    }
}
int computer_guess(void)
{
    srand(time(NULL));
    return ((rand() % 11) + (rand() % 11));
}
void player_capital(int playerguess, int flag)
{
    if (flag == 1)
    {
        // If the player wins upgrade its credit with its guessed number.
        credit = credit + playerguess;
    }
    if (flag == 0)
    {
        // player losses then deduct his credit with 10 credits.
        credit = credit - 10;
    }
    if (flag == 2)
    {
        // player losses then deduct his credit with 10 credits.
        credit = credit - 10;
    }
}
void computer_capital(int computerguess, int flag)
{
    if (flag == 0)
    {
        // Machine wins so Upgrading its credit.
        machine_credit = machine_credit + computerguess;
    }
    if (flag == 1)
    {
        // Machine losses then deducting its credit with 10 credit.
        machine_credit = machine_credit - 10;
    }
    if (flag == 2)
    {
        // Machine losses then deducting its credit with 10 credit.
        machine_credit = machine_credit - 10;
    }
}
int play(int rounds)
{

    // Assigning the variables the credits to start the game
    machine_credit = rounds;
    credit = rounds;
    int round = rounds;
    Lines();
    printf("\nSo You've %d credit and Machine have %d credits.\n", credit, machine_credit);
    // Starting a loop till the round ends.
    for (int r = 1; r <= round; r++)
    {
        Lines();
        printf("\n\"This is round %d\"\n", r);
        int computesum = compute_sum();
        // Assigning value to Computer guess
        int playerguess = player_guess();
        // Assigning Value to Player guess.
        int computerguess = computer_guess();
        // Assigning Value to Computer guess.

        if (computesum == playerguess)
        {
            // Checking if the player wins then calling functions to update credits.
            int flag = 1;
            Lines();
            printf("\nThe guess %d is same as your guess %d.", computesum, playerguess);
            printf("\nYou have won this round.\n");
            player_capital(playerguess, flag);
            computer_capital(computerguess, flag);
        }
        if (computesum == computerguess)
        {
            // Checking if Machine wins then calling functions to update credits.
            int flag = 0;
            printf("\nMachine has won this round.\n");
            player_capital(playerguess, flag);
            computer_capital(computerguess, flag);
        }
        if (computesum != computerguess && computesum != playerguess)
        {
            // Checking if both lose then calling functions to degrade credits.
            int flag = 2;
            printf("\nNo one won.\n");
            player_capital(playerguess, flag);
            computer_capital(computerguess, flag);
        }
        Lines();
        // printf("\n\nThis is for testing\n%d comptesum\n%d computerguess\n%dplayerguess\n\n",computesum,computerguess,playerguess);
        // Printing out the credit status.
    }
    if (machine_credit > credit)
    {
        // if the machine wins then returning 0
        return 0;
    }
    if (credit > machine_credit)
    {
        // if the Player wins return 1
        return 1;
    }
    if (credit == machine_credit)
    {
        // If both loses then return 2
        return 2;
    }
}
void Lines(void)
{
    // just a function to create lines in a function.
    for (int i = 1; i < 80; i++)
    {
        printf("-");
    }
}
