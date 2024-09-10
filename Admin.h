#pragma once
#include "Person.h"
#include "Worker.h"
#define KWOTA 556.02
enum Stanowiska { mloszy_specjalista, specjalista, starszy_specjalista};
class Admin : public Worker
{public:
	Admin(string name, int age, double salary, int staz, Stanowiska stanowisko)noexcept;
	
	void SetStanowisko(Stanowiska stanowisko);
	Stanowiska getStanowisko();
	
	double CalcSalary();
	void printWorker() override;
private:
	
	Stanowiska m_stanowisko;

};


inline Stanowiska Admin::getStanowisko()
{
	return m_stanowisko;
}
inline void Admin::SetStanowisko(Stanowiska stanowisko)
{
	m_stanowisko = stanowisko;
}
/*inline void Admin::SetSalary(double salary)
{
	m_salary = salary;
}*/


