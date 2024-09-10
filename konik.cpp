#include "konik.h"

int move(int** pChessBoard, int nDim, int move, int x, int y,
	int* px, int* py, Point* pHorseMoves)
{	/*
	switch (move)
	{
	case FIRST: *px = x + 1; *py = y + 2; break;
	case SECOND: *px = x + 2; *py = y + 1; break;
	case THIRD: *px = x + 2; *py = y - 1; break;
	case FOURTH:*px = x + 1; *py = y - 2; break;
	case FIFTH:*px = x - 1; *py = y - 2; break;
	case SIXTH:*px = x - 2; *py = y - 1; break;
	case SEVENTH:*px = x - 2; *py = y + 1; break;
	case EIGHTH:*px = x - 1; *py = y + 2; break;
	default:
		printf("Error: Invalid move\n");
		return 0;
	}*/
	*px = x + pHorseMoves[move].x;
	*py = y + pHorseMoves[move].y;

	//zakresy
	if (*px<0 || *py<0 || *px>=nDim || *py>=nDim)return 0;
	if ( pChessBoard[*px][*py] != 0)return 0; //w tym jest numer ruchu
	//if (pHorseMoves->x==*px && pHorseMoves->y==*py)return 0;
	
	return 1;
}
int root(int** pChessBoard, int nDim,  int x, int y, 
	Point* pHorseMoves)
{
	static int moveNo = 1;
	if (moveNo == (nDim*nDim)) return 1;
	pChessBoard[x][y] = moveNo++; // numery ruchow
	
	int px=x;
	int py=y;

	for (int i = FIRST; i <= EIGHTH; i++)
	{	
		//printf("\n%d ruch numer\n%d %d px i py ", i,px,py);
		int temp = move(pChessBoard, nDim, i, x, y, &px, &py, pHorseMoves);
		//printf("\n%d zwrot move\n", temp);
		if (move(pChessBoard,nDim , i, x , y,&px,&py,pHorseMoves) == 1) //przez i zmieniam ruchy
		{	
			//pChessBoard[x][y] = moveNo++; // numery ruchow
			//printChessBoard(pChessBoard, nDim);
			if (root(pChessBoard, nDim, px, py, pHorseMoves))   //rekurencja  jak siê koñczy to po prostu symuluje dalej ifa dla poprzedniego for
				return 1;
		}
	}
	// ustawienie ruchu na z³y
	pChessBoard[x][y] = 0; //jesli nie ma dostepnego ruchu pozycja na 0 aktualna 
	moveNo--; // zmniejszamy numery ruchu i cofamy siê
	return 0;
}
//kreuje i zeruje
int** createChessboard(int nDim)
{
	int** pTab = NULL;
	//wskaznik na wiersze
	pTab = (int**)malloc(sizeof(int*) * nDim);
	if (pTab == NULL)
	{	
		printf("\nIndex to Rows Allocation error\n");
		return NULL;
	}
	//tablica jedna o rozmiarze nDim x nDim
	int* data = (int*)malloc(sizeof(int) * nDim * nDim);
	if (data == NULL) {
		printf("\ndata Allocation Error\n");
		free(pTab);
		return NULL;
	}
	memset(data, 0, nDim * nDim * sizeof(int));
	for (int i = 0; i < nDim; i++)
	{
		pTab[i] = &data[i*nDim]; // wk³adam jeden wiersz do tablicy wskaznikow
	}
	return pTab;
}
void freeChessboard(int*** pChessBoard)
{	
	
	if (pChessBoard == NULL || *pChessBoard == NULL) {
		return;
	}
	//for (int i = 0; i < CHESSBOARDS_SIZE; i++)
	//{
	//	free(pChessBoard[i]);
	//}
	//free((*pChessBoard)[0]);
	free(*pChessBoard[0]);
	free(*pChessBoard);

	*pChessBoard = NULL;
}
// zwalnia tablice 

void printChessBoard(int** pChessBoard, int nDim)
{
	for (int i = 0; i < nDim; i++)
	{
		int* k = *pChessBoard++; //wiersz z numerami ruchu
		printf("\n");
		for (int j = 0; j < nDim; j++)
		{
			printf("%d ", *k++);
		}
	}
	printf("\n");
}


