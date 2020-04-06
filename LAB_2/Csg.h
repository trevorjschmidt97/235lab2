#pragma once
#include "Course.h"

class Csg : public Course
{
public:
	Csg();
	~Csg();

	string getGrade();
	string toString();

private:
	int studID;
	string grade;

};

