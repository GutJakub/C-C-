#include "Admin.h"
const char* stanowiska[] = { "mloszy_specjalista", "specjalista", "starszy_specjalista" };
Admin::Admin(string name, int age, double salary, int staz, Stanowiska stanowisko)noexcept: Worker(name,age,salary)
{	
	SetStanowisko(stanowisko);
}
inline double Admin::CalcSalary()
{
	double Netto = 0;
	double podatek = 0;
	podatek= ( (getSalary() - 111.25) * 0.18 ) - KWOTA;
	if (podatek < 0)
	{
		podatek = 0;
	}
	Netto = getSalary() - podatek;
	return Netto;
}
void Admin::printWorker()
{
	cout << "STANOWISKO: " << stanowiska[getStanowisko()] << endl;
	cout << "PODATEK: " << getSalary() - CalcSalary() << endl;
	cout << "netto: " << CalcSalary() << endl;
}