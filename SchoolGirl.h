#pragma once
#include "Pupil.h"
#include <string>
class SchoolGirl: public Pupil
{
public:
	SchoolGirl(string name, int age, string ClassName)noexcept;
	void printOutfit() override;
};

