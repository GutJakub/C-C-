#include "Person.h"
Person::Person(string Name, int age)noexcept
{
	setPerson(Name, age);
}
void Person::setPerson(string Name, int age)
{	
	setName(Name);
	setAge(age);
}
