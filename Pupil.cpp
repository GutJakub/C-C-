#include "Pupil.h"
const char* SubjectNames[] = { "POLSKI","MATEMATYKA","FIZYKA","CHEMIA","INFORMATYKA","ANGIELSKI","NIEMIECKI" };
int Pupil::m_baseID = 10000;
Pupil::Pupil(string name, int age, string ClassName) noexcept: Person( name, age)
{	
	//setPerson(name, age);
	clearNotes();
	setClassName(ClassName);
	m_ID = to_string(m_baseID++);//zwiekszamy baseID i przypisujemy poprzednie do ID jako string
}
Pupil::~Pupil() {};
void Pupil::setNote(Subjects subject, double note)
{
	if(fmod(note, 0.5)==0 && note >= 2 && note <= 5 && note != 2.5)
	m_notes[subject] = note;
}
double Pupil::calcAve()
{
	int noteNo = 0;
	double Ave=0;
	for (int i = POLSKI; i < MAXNOTES; i++)
	{
		if ( m_notes[i] >=2 )
		{
			Ave += m_notes[i];
			noteNo++; // liczymy srednia dla ilosci ocen jaka ma a nie dla calkowitych przedmiotow
		}
	}
	if (noteNo > 0)m_Ave = Ave / noteNo;
	return m_Ave;
}
void Pupil::clearNotes()
{	
	memset(m_notes, 0, sizeof(double) * MAXNOTES);
	m_Ave = 0;
}
void Pupil::printPupil()
{
	cout << getID() << ' ' << getName() << ' ' << ' ' << getAge() << endl;
	cout << "Ave = " << calcAve() << endl;
	for (int i = 0; i < 7; i++)
		cout << SubjectNames[i]<< "\t" << m_notes[i] << endl;
	printOutfit(); cout <<endl;
}