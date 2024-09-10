#pragma once
#include "Worker.h"
#include <string>
#define KWOTA 556.02
class Teacher : public Worker
{
public:
	Teacher(string name, int age, double salary,Subjects przedmiot, int staz, bool wychowawca, string klasa)noexcept;

	void SetStaz(int staz);
	void SetSubject(Subjects subject);
	void SetClass(bool wychowawca, string klasa);
	void SetTeacher(Subjects przedmiot, int staz, bool wychowawca, string klasa);
	void printWorker()override;
	double CalcSalary();
	
	int getStaz();
	Subjects getSubject();
	bool getWychowca();
	string getKlasa();

private:
	int m_staz;
	Subjects m_subject; // ktorego uczy
	bool m_wychowawca;
	string m_klasa;
	
};
//=============INLINE===========

inline int Teacher::getStaz()
{
	return m_staz;
}
inline Subjects Teacher::getSubject()
{
	return m_subject;
}
inline bool Teacher::getWychowca()
{
	return m_wychowawca;
}
inline string Teacher::getKlasa()
{
	return m_klasa;
}
inline void Teacher::SetStaz(int staz)
{
	m_staz = staz;
}
inline void Teacher::SetSubject(Subjects subject)
{
	m_subject = subject;
}

