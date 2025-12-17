// tac toc game:
#include <stdio.h>
#include<stdlib.h>
int main()
{
    printf("\n\n############## WELCOME ################\n");
    printf("*********** TO TIC TAC TOE GAME ************\n");
    printf("|||INSTRUCTON:  X for player1 and O for player2 |||\n\n");
    int c = 0;
    char f, x;
    char a[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 1; i < 10; i++)
    {
        if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 9))
        {
            printf("player1: ");
            scanf("%s", &f);
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[j][k] == f)
                    {
                        a[j][k] = 'X';
                        for (int l = 0; l < 3; l++)
                        {
                            for (int m = 0; m < 3; m++)
                            {
                                printf("%c ", a[l][m]);
                            }
                            printf("\n");
                        }
                        if (((a[0][0] == 'X') && (a[0][1] == 'X') && (a[0][2] == 'X')) || ((a[1][0] == 'X') && (a[1][1] == 'X') && (a[1][2] == 'X')) || ((a[2][0] == 'X') && (a[2][1] == 'X') && (a[2][2] == 'X')))
                        {
                            printf("\n@@@@@@@@     player1 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                        else if (((a[0][0] == 'X') && (a[1][0] == 'X') && (a[2][0] == 'X')) || ((a[0][1] == 'X') && (a[1][1] == 'X') && (a[2][1] == 'X')) || ((a[0][2] == 'X') && (a[1][2] == 'X') && (a[2][2] == 'X')))
                        {
                            printf("\n@@@@@@@@     player1 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                        else if (((a[0][0] == 'X') && (a[1][1] == 'X') && (a[2][2] == 'X')) || ((a[0][2] == 'X') && (a[1][1] == 'X') && (a[2][0] == 'X')))
                        {
                            printf("\n@@@@@@@@     player1 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                    }
                }
            }
        }
        if ((i == 2) || (i == 4) || (i == 6) || (i == 8))
        {   
            printf("player2: ");
            scanf("%s", &x);
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if (a[j][k] == x)
                    {
                        a[j][k] = 'O';
                        for (int l = 0; l < 3; l++)
                        {
                            for (int m = 0; m < 3; m++)
                            {
                                printf("%c ", a[l][m]);
                            }
                            printf("\n");
                        }
                        if (((a[0][0] == 'O') && (a[0][1] == 'O') && (a[0][2] == 'O')) || ((a[1][0] == 'O') && (a[1][1] == 'O') && (a[1][2] == 'O')) || ((a[2][0] == 'X') && (a[2][1] == 'O') && (a[2][2] == 'O')))
                        {
                            printf("\n@@@@@@@@     player2 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                        else if (((a[0][0] == 'O') && (a[1][0] == 'O') && (a[2][0] == 'O')) || ((a[0][1] == 'O') && (a[1][1] == 'O') && (a[2][1] == 'O')) || ((a[0][2] == 'X') && (a[1][2] == 'O') && (a[2][2] == 'O')))
                        {
                            printf("\n@@@@@@@@     player2 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                        else if (((a[0][0] == 'O') && (a[1][1] == 'O') && (a[2][2] == 'O')) || ((a[0][2] == 'O') && (a[1][1] == 'O') && (a[2][0] == 'O')))
                        {
                            printf("\n@@@@@@@@     player2 is win     @@@@@@@@");
                            c += 1;
                            break;
                        }
                    }
                }
            }
        }
        if (c == 1)
        {
            printf("\n      WINNER WINNER CHICKEN DINNER       \n");
            break;
        }
    }
    printf("\n*-*-*-*-*-*-*-* END *-*-*-*-*-*-*-*-*\n");
    return 0;
}