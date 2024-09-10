#pragma once
#include "Pupil.h"
#include <string>
class SchoolBoy : public Pupil
{
public:
	SchoolBoy(string name, int age, string ClassName)noexcept;
	void printOutfit() override;
};

