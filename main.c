#include <stdio.h>
#include <stdlib.h>


void showBoard(char board[3][3])
{
    for(int i=0; i<3; ++i)
    {
        printf("\t\t\t  %c | %c  | %c  \n", board[i][0], board[i][1], board[i][2]);
        printf("\t\t\t----+----+----\n");
    }
}
int main()
{
    char ticTacToe[3][3];
    char entry='*';
    int pos, turn=0, turnCheck=0, usedPos[9]= {0,0,0,0,0,0,0,0,0}, usedPosCounter=0;


    /*  Initializing every index with whitespace
        to get a clean board
    */
    for(int i=0; i<3; ++i)
        for(int j=0; j<3; ++j)
            ticTacToe[i][j]= ' ';
    while(1)
    {
        entry= (turn%2==0)?'O':'*';
        printf("Enter the position to play your turn: ");
        scanf("%d",&pos);
        for(int i=0; i<usedPosCounter; ++i)
        {
            if(pos==usedPos[i])
            {
                printf("Location already taken, try again!\n");
                continue;
            }
        }

        switch(pos)
        {
        case 1:
            ticTacToe[0][0]=entry;
            turn++;
            break;
        case 2:
            ticTacToe[0][1]=entry;
            turn++;
            break;
        case 3:
            ticTacToe[0][2]=entry;
            turn++;
            break;
        case 4:
            ticTacToe[1][0]=entry;
            turn++;
            break;
        case 5:
            ticTacToe[1][1]=entry;
            turn++;
            break;
        case 6:
            ticTacToe[1][2]=entry;
            turn++;
            break;
        case 7:
            ticTacToe[2][0]=entry;
            turn++;
            break;
        case 8:
            ticTacToe[2][1]=entry;
            turn++;
            break;
        case 9:
            ticTacToe[2][2]=entry;
            turn++;
            break;
        default:
            printf("\nPlease enter proper location!");
            continue;
        }
        if(turnCheck==turn)
            continue;
        else
        {
            usedPos[usedPosCounter++]=pos;
            turnCheck=turn;
            system("cls");
            showBoard(ticTacToe);
        }

    }
    showBoard(ticTacToe);


}
