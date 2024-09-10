#pragma once
#include <iostream>
using namespace std;
#include <string>
enum Subjects { POLSKI, MATEMATYKA, FIZYKA, CHEMIA, INFORMATYKA, ANGIELSKI, NIEMIECKI };
class Person
{
public:
	Person(string Name = "", int age = 0)noexcept;
	//virtual ~Person();
	void setName(string newName);
	void setAge(int newAge);
	void setPerson(string Name, int age);
	string getName() const;
	int getAge()const;
	
private:
	string m_Name;
	int m_age;
};
//==============inline======

inline void Person::setName(string newName)
{
	m_Name = newName;
}
inline void Person::setAge(int newAge)
{
	m_age = newAge;
}
inline string Person::getName() const
{
	return m_Name;
}
inline int Person::getAge() const
{
	return m_age;
}

