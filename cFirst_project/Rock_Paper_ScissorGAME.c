/* Done by
 * Nmae : Hassan Abdulgader Jabir
 * Job : Software Engineer 4rom alx africa
 */

// THIS IS FOR GAME NAMED ROCK & PAPER & SCISSOR
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

int GAME(char player, char computer)
{
   //if the player choice and the computer are equal return -1 that means Draw
    if(player == computer) return (-1);

   //if player choice R for Rock and computer randomly choice P for Paper return 0 which is the  computer won
    else if(player == 'R' && computer == 'P') return (0);

    //if player choice P for Paper and computer randomly choice R for Rock return 0 which is the  computer won
    else if(player == 'P' && computer == 'R') return (1);

    //if player choice R for Rock and computer randomly choice S for Scissor return 1 which is the  player won
    else if(player == 'R' && computer == 'S') return (1);

    //if player choice S for Scissor and computer randomly choice R for Rock return 0 which is the  computer won
    else if(player == 'S' && computer == 'R') return (0);

   //if player choice S for Scissor and computer randomly choice P for Paper return 1 which is the  player won
    else if(player == 'S' && computer == 'P') return (1);

    //if player choice P for Paper and computer randomly choice S for Scissor return 0 which is the  computer won
    else if(player == 'P' && computer == 'S') return (0);

}

int main(void)
{
    int n = 0;
    char player, computer, result;

    srand(time(0)); // Initialize random seed
    n = rand() % 100; // Generate random number between 0-99

    // Divide the probability between the elements (Rock, Paper, Scissor)
    if(n < 33)
        computer = 'R'; // Computer randomly chooses Rock
    else if(n >= 33 && n < 66)
        computer = 'P'; // Computer randomly chooses Paper
    else
        computer = 'S'; // Computer randomly chooses Scissor

    printf("\n\t\t\t\t\t_______ Let's start playing! _______\t\t\t\t\t");
    printf("\nChoice between R -> Rock, P -> Paper, S -> Scissor: ");
    scanf(" %c", &player); // Get player's choice

    result = GAME(player, computer); // Determine the winner

    if(result == -1)
        printf("\nIt's a draw! Both chose %c.\n", player);
    else if(result == 0)
        printf("\nComputer wins! %c beats %c.\n", computer, player);
    else
        printf("\nPlayer wins! %c beats %c.\n", player, computer);

    return 0;
}

