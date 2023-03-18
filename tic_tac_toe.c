/**
 * @file tic_tac_toe.c
 * @author Jesutofunmi Kupoluyi (jimsufficiency@gmail.com)
 * @brief This is a basic tic tac toe game
 * @version 0.1
 * @date 2023-02-15
 *
 * @copyright Copyright (c) 2023
 *
 */

/*Including reqired libraries*/
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/*Defines*/
#define LENGTH 10

/*Function prototypes*/
void draw_board(char[]);
void mark_board(char);
int check_for_win();

/* Global Variables*/
char board[LENGTH] = {'o', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice, player;

/*Main function*/
int main(int argc, char const *argv[])
{
    int game_stat;
    char mark;

    player = 1;

    do
    {
        draw_board(board);
        player = (player % 2) ? 1 : 2;

        printf("Player %d, enter a number: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O';

        mark_board(mark);

        game_stat = check_for_win();

        player++;

    } while (game_stat == -1);

    draw_board(board);

    if (game_stat == 1)
        printf("\n\n**>\a \t Player %d Wins!!! \n\n\n", --player);
    else
        printf("\n\n**>\a \t Game Draw!!! \n\n\n");

    return 0;
}

/*Custom Functions*/

/**
 * @brief  Function to return game status:
 *
 *  1 for game over with result
 *  -1 for game in progress
 *  0 for game is over and no result
 *
 * @return int
 */
int check_for_win(void)
{
    int return_value = 0;

    if (board[1] == board[2] && board[2] == board[3])
        return_value = 1;

    else if (board[4] == board[5] && board[5] == board[6])
        return_value = 1;

    else if (board[7] == board[8] && board[8] == board[9])
        return_value = 1;

    else if (board[1] == board[4] && board[4] == board[7])
        return_value = 1;

    else if (board[2] == board[5] && board[5] == board[8])
        return_value = 1;

    else if (board[3] == board[6] && board[6] == board[9])
        return_value = 1;

    else if (board[1] == board[5] && board[5] == board[9])
        return_value = 1;

    else if (board[3] == board[5] && board[5] == board[7])
        return_value = 1;

    else if (board[1] != '1' && board[2] != '2' && board[3] != '3' && board[4] != '4' && board[5] != '5' && board[6] != '6' && board[7] != '7' && board[8] != '8' && board[9] != '9')
        return_value = 0;

    else
        return_value = -1;

    return return_value;
}

/**
 * @brief Function to draw board on screen
 *
 * @param arr
 * @return ** void
 */
void draw_board(char arr[LENGTH])
{
    system("clear");
    printf("\n\n");
    printf("\t\t   TIC TAC TOE\t\t\t\n\n\n");

    printf("\tPlayer 1 (X)\t-\tPlayer 2 (O)\n");

    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", arr[1], arr[2], arr[3]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", arr[4], arr[5], arr[6]);
    printf("\t\t_____|_____|_____\n");
    printf("\t\t     |     |     \n");
    printf("\t\t  %c  |  %c  |  %c \n", arr[7], arr[8], arr[9]);
    printf("\t\t     |     |     \n");
}

/**
 * @brief Function to place player's mark on board
 *
 * @param mark
 * @return ** void
 */
void mark_board(char mark)
{
    if (choice == 1 && board[1] == '1')
        board[1] = mark;

    else if (choice == 2 && board[2] == '2')
        board[2] = mark;

    else if (choice == 3 && board[3] == '3')
        board[3] = mark;

    else if (choice == 4 && board[4] == '4')
        board[4] = mark;

    else if (choice == 5 && board[5] == '5')
        board[5] = mark;

    else if (choice == 6 && board[6] == '6')
        board[6] = mark;

    else if (choice == 7 && board[7] == '7')
        board[7] = mark;

    else if (choice == 8 && board[8] == '8')
        board[8] = mark;

    else if (choice == 9 && board[9] == '9')
        board[9] = mark;

    else
    {
        printf("Invalid move! ");
        player--;
        getchar();
    }
}
