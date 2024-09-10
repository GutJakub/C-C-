/*==================
BACKTRACKING  - algorytm z nawrotami
-------------
ogólny algorytm wyszukiwania wszystkich (lub kilku) rozwi¹zañ 
niektórych problemów obliczeniowych, który stopniowo generuje 
kandydatów na rozwi¹zanie jednak, gdy stwierdzi, ¿e znaleziony 
kandydat x nie mo¿e byæ poprawnym rozwi¹zaniem, nawraca (ang. "backtracks") 
do punktu, gdzie mo¿e podj¹æ inn¹ decyzje zwi¹zan¹ z jego budow¹
==============================*/


// zdefiniowac stala CHESSBOARD_SIZE  - wymiar szchownicy  ( < 8) 7   lub 6 lub 5

// zdefiniowac typ wyliczeniowy HMoves : od FIRST to EIGHT

// zdefiniowac typ strukturalny Point  (skldowe x i y)

//=====================================================
//int move( int** pChessBoard, int nDim, int move, int x, int y, 
  //        int* px, int* py, Point* pHorseMoves );

/* pChessBoard - szachownica (kwadratowa) - pamieta ruchy
   nDim - rozmiar szachownicy  
   move - numer mozliwego ruchu konia szachowego (indeks pHorseMoves)
   x, y - indeksy w tablicy skad wykonujemy kolejny ruch 
   px, py - nowe wspolrzedne (params output)
   pHorseMoves - offsety (x i y) dla obliczenia kolejnej mozliwosci skoku konia z zadanego punktu
*/
///
//int root( int** pChessBoard, int nDim, int moveNo, int x, int y, Point* pHorseMoves );

/* pChessBoard - szachownica (kwadratowa) o romiarze nDim
   moveNo - numer ruchu (do sprawdzenia czy juz wszystkie pola odwiedzone)
   x, y - wspol skad robimy kolejny ruch
   pHorseMoves - offsety (x i y) wszystkich mozliwych skokow konia z ZADANEJ pozycji
*/

//int** createChessboard( int nDim );  //druga metoda tworzenia tablicy 2D
// kreuje i zeruje tablice 

//void freeChessboard( int*** pChessBoard );
// zwalnia tablice 

//void printChessBoard( int** pChessBoard, int nDim ); 
// wypisuje szachownice
//=======================================

#include "konik.h"

//-------------------------------------------------------------
int main( int argc, char* argv[] )
{
  // odczytac ustawienie poczatkowe x0, y0 konika szachowego z parametrow main()

  // sprawdzenie czy poprawne

  // Wykreowac dynamicznie tablice kwadratow¹ o rozmiarze CHESSBOARD_SIZE
  
  // zdefiniowac tablica do pamietania mozliwych offestow ruchow
  Point HorseMove[HORSE_MOVES] = { {x1, y1}, .....    }; // 8 mozliwych ruchow
  // (x_akt+x1. y_akt+y1) - daje wsp ruchu konika szachowego

  // Jezeli nie znaleziono drogi od (x0,y0) - wypisac
  // "** Nie ma mozliwosci odwiedzic jednokrotnie ka¿dego pola!!\n\n";
  // jesli ok to wypisac szachownice z numerami kolejnych krokow
  
  //zwolnic pamiec!!

  return 0;
}

//-------------------------------------------------------------
int** createChessboard( int nDim )
{
  // pamiec przydzielona jako jeden blok pamieci o 
  // rozmiarze nDim*nDim oraz tablica wsk do wierszy

}

//-------------------------------------------------------------
void freeChessboard( int*** pChessBoard )
{
  //zwolnic wszystkie wiersze za jednym razem
  // potem zwolnic tablice adresow wierszy
  // wynulowac wsk to tabl
}

//-------------------------------------------------------------
void printChessBoard( int** pChessBoard, int nDim )
{
  
}

//-------------------------------------------------------------
int move( int** pChessBoard, int nDim, int move, int x, int y, 
          int* px, int* py, Point* pHorseMoves )
{   
  // x  y - wsporzedne skad robimy nowy ruch   obliczyc nowa pozycje skoczka *px, *py
  
  // sprawdzic czy nowe indeksy *px i *py sa w zakresie indeksow tablicy
  // a nastepnie czy nie bylo sie juz w lokalizacji (*px,*py) - parametry WY
  // jesli wszystkie warunki poprawne to zwracamy 1
  // else 0
}   

//----------------------------------------------------------------------------------
int root( int** pChessBoard, int nDim, int moveNo, int x, int y, Point* pHorseMoves )
{ 
  // tabl pChessBoard pamieta droge - 0 pole nie odwiedzone  
  //                                  1..nDim^2 numer kolejnego ruchu
  
  // wstawic kolejny numer ruchu
  // jesli koniec to zwracamy 1  (ilosc ruchow porownac z iloscia pozycji na szachownicy)
  //  else
  {
    // zdefiniowac zmienne - nowe pozycje x i y
    // sprwadzic wszystkie mozliwosci ruchu (petla od FIRST do EIGHT)
      // jesli ruch do nowej poycji mozliwy (sprawdza move())
        // to rekurencyjnie wykonac ruch moveNo+1 
	       // jesli zwrocono 1 z rekurencji to zwrocic   1;
  }
	// jezeli wracamy(wycofujemy sie) to ustawiamy w pChessBoard[x][y] na 0 bo ten ruch byl zly
    // i cofamy ruch

  return 0;
}   


/*

Kwadratowa szachownica (n x n) 
Liczba mo¿liwych œcie¿ek konika szachowego 
1x1    1     
2x2    0   // nie ma ruchu  
3x3    0   // sa pozycje blokujace  
4x4    0   // sa pozycje blokujace  
5x5    1728    
6x6    6’637’928     
7x7    165’575’218’320 
*/
