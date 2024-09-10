// Konik.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "konik.h"
using namespace std;
#define CHESSBOARDS_SIZE 5
#define HORSE_MOVES 8

int main(int argc, char* argv[])
{
    if (argc != 3)
    {
        printf("\nError input arguments\n");
        return 1;
    }
    int x = *argv[1] - 48;
    int y = *argv[2] - 48;
    int** pChessBoard = createChessboard(CHESSBOARDS_SIZE);

    printChessBoard(pChessBoard, CHESSBOARDS_SIZE);
    //Point* HorseMove = NULL;
    Point HorseMove[HORSE_MOVES] = {
    {-2, 1}, {-1, 2}, {1, 2}, {2, 1},
    {2, -1}, {1, -2}, {-1, -2}, {-2, -1}
    };
    int x1=0;
    int y1=0;
    int temp;
    temp = move(pChessBoard, CHESSBOARDS_SIZE, SECOND, 0, 0,&x1,&y1, HorseMove);
   // printf("%d %d\n", temp,x1);
    printf("\n%d\n", HorseMove[0].x);
    
    //root(pChessBoard, CHESSBOARDS_SIZE, 0, x, y, HorseMove);
    
    if (root(pChessBoard,CHESSBOARDS_SIZE,x,y,HorseMove) == 0) // JESLI PIERWSZA FUNKCJA ZWROCI 0 TO KONIEC ALGORYTMU
    {
        printf("** Nie ma mozliwosci odwiedzic jednokrotnie ka¿dego pola!!\n\n");
    }
    else // jesli ok to wypisac trase
    {
        printf("\nPoprawne numery: \n");
        printChessBoard(pChessBoard,CHESSBOARDS_SIZE);
    }
    
    //printChessBoard(pChessBoard,CHESSBOARDS_SIZE);
    //zwolnic pamiec!!
    freeChessboard(&pChessBoard);
    
    return 0;
}

/*
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
        pChessBoard[i][j] = i*5+j;
    }
}*/

//x = move(pChessBoard, CHESSBOARDS_SIZE, SECOND, 0, 0,&x1,&y1, HorseMove);
//printf("%d\n", x);