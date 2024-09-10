#include "Worker.h"
Worker::Worker(string name, int age, double salary):Person(name, age)
{
	setSalary(salary);
}
Worker::~Worker()
{
}
void Worker::printWork()
{
	cout << "IMIE I NAZWISKO: " << getName() << endl;
	cout << "WIEK: " << getAge() << endl;
	cout << "PENSJA: " << getSalary() << endl;
	printWorker();
}
