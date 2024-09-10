#pragma once
#include "Person.h"
class Worker: public Person
{
public:
	Worker(string name="", int age=0, double salary=0);
	~Worker();

	void setSalary(double salary);
	double getSalary()const;
	
	void printWork();
	virtual void printWorker()=0;
private:
	double m_Salary;
	
};
//=======================INLINE
inline void Worker::setSalary(double salary)
{
	m_Salary = salary;
}

inline double Worker::getSalary() const
{
	return m_Salary;
}
