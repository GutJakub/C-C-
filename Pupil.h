#pragma once
#include <iostream>
using namespace std;
#include <string>
#include "Person.h"

#define MAXNOTES 7
//typedef enum(POLSKI, MATEMATYKA...)SUBJECTS;
class Pupil : public Person
{
public:
	Pupil(string name = "", int age = 0, string ClassName = "")noexcept;
	~Pupil();
	void clearNotes();
	void setNote(Subjects subject, double note);
	
	double calcAve();
	void setClassName(string newClassName);

	string getClassName() const;
	string getID() const;
	double getAve()const;
	
	void printPupil();
	virtual void printOutfit()=0;
protected:
	string m_ID;
private:
	static int m_baseID;
	double m_notes[MAXNOTES];
	double m_Ave;
	string m_ClassName;

};
//=========INLINE========
inline string Pupil::getID() const
{
	return m_ID;
}
inline string Pupil::getClassName() const
{
	return m_ClassName;
}
inline double Pupil::getAve() const
{
	return m_Ave;
}

inline void Pupil::setClassName(string newClassName)
{
	m_ClassName = newClassName;
}
