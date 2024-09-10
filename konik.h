#pragma once
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#define CHESSBOARDS_SIZE 5
enum HMoves { FIRST, SECOND, THIRD, FOURTH, FIFTH, SIXTH, SEVENTH, EIGHTH };

typedef struct
{
	int x;
	int y;

}Point;

int move(int** pChessBoard, int nDim, int move, int x, int y,
	int* px, int* py, Point* pHorseMoves);

int root(int** pChessBoard, int nDim, int x, int y, Point* pHorseMoves);


int** createChessboard(int nDim);  //druga metoda tworzenia tablicy 2D
// kreuje i zeruje tablice 

void freeChessboard(int*** pChessBoard);
// zwalnia tablice 

void printChessBoard(int** pChessBoard, int nDim);
// wypisuje szachownice
//=======================================