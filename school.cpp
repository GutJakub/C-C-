
#include <iostream>
#include "Pupil.h"
#include <string>
#include "SchoolBoy.h"
#include "SchoolGirl.h"
#include "Admin.h"
#include "Teacher.h"
using namespace std;
#define MAXWORKER 9
void PrintList(Worker** tab, int WorkerNo);

int main()
{   
    SchoolBoy p1("Jakub Gut", 20, "1C");
    SchoolGirl p2("Julia Weinar", 19, "2C");
    Admin a1("Pani Sprzatajaca", 30, 10000, 10, specjalista);
    Teacher t1("Olga Blyskal", 50, 10000,POLSKI, 30, true, "2E");
    p1.setNote(NIEMIECKI, 3);
    p1.printPupil();
    p2.printPupil();
    a1.printWork();
    t1.printWork();
    cout << "Testowanie tablicy" << endl;
    Worker* worker[MAXWORKER] = {NULL}; // podwojny wskaznik na tablice work
    Worker* w = NULL;
    worker[0] = w = new Admin("Jan Kowalski", 30, 10000, 10, specjalista);
    worker[1] = w = new Teacher("Olga Blyskal", 50, 10000, POLSKI, 30, true, "2E");
    worker[2] = w = new Admin("Karol Nowak", 45, 5000, 20, starszy_specjalista);
    worker[3] = w = new Admin("Bartlomiej Nowacki", 34, 4500, 6,mloszy_specjalista);
    worker[4] = w = new Teacher("Katarzyna Wilkosz", 52, 7000, POLSKI, 25, true, "1B");
    worker[5] = w = new Teacher("Marek Walczyk", 63, 7200, MATEMATYKA, 34, false,"");
    worker[6] = w = new Teacher("Krysztof Festlik", 47, 4100, ANGIELSKI, 15, true, "3D");
    worker[7] = w = new Teacher("Waldemar Grzebien", 64, 5600, NIEMIECKI, 37, true, "1A");
    worker[8] = w = new Teacher("Michal Nowicki", 32, 3500, INFORMATYKA, 4, false,"");
    PrintList(worker, 9);
    return 0;
}
// void t
void PrintList(Worker** tab, int WorkerNo)
{
    for (int i = 0; i < WorkerNo; i++)
    {
        tab[i]->printWork();
        cout << endl;
    }
}


