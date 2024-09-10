#include "Teacher.h"
const char* subjectNames[] = { "POLSKI","MATEMATYKA","FIZYKA","CHEMIA","INFORMATYKA","ANGIELSKI","NIEMIECKI" };
Teacher::Teacher(string name, int age, double salary, Subjects przedmiot, int staz, bool wychowawca, string klasa)noexcept: Worker(name,age,salary)
{
	SetTeacher( przedmiot, staz, wychowawca, klasa);
}
void Teacher::SetClass(bool wychowawca, string klasa)
{
	m_wychowawca = wychowawca;
	m_klasa = (wychowawca) ? klasa : "";
}
void Teacher::SetTeacher(Subjects przedmiot, int staz, bool wychowawca, string klasa)
{
	SetSubject(przedmiot);
	SetStaz(staz);
	SetClass(wychowawca, klasa);
}
double Teacher::CalcSalary()
{
	double Netto = 0;
	double dodatek = 0;
	if (getStaz() > 5 && getStaz() <= 20)
	{
		dodatek = getStaz() / 100 * getSalary();
	}
	else if (getStaz() > 20)dodatek = 0.2 * getSalary();
	if (getWychowca())Netto += 400;
	Netto += dodatek + getSalary();
	double podatek = (((Netto * 0.8) * 0.5) * 0.18 - KWOTA);
	if (podatek < 0)
	{
		podatek = 0;
	}
	Netto = getSalary() - podatek;
	return Netto;
}

void Teacher::printWorker()
{
	/*
		int m_staz;
	Subjects m_subject; // ktorego uczy
	bool m_wychowawca;
	string m_klasa;*/
	cout << "Przedmiot: " << subjectNames[getSubject()] << endl;
	cout << "Staz: " << getStaz() << endl;
	if (getWychowca()) {
		cout << "Wychowawca: TAK" << endl;
		cout << "Klasa: " << getKlasa() << endl;
	}
	else {
		cout << "Wychowawca: NIE" << endl;
	}
	cout << "netto: " << CalcSalary() << endl;
	cout << "Podatek: " << getSalary() - CalcSalary() << endl;
}