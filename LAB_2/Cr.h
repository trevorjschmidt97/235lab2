#pragma once
#include "Course.h"
class Cr : public Course
{
public:
	Cr();
	~Cr();

	string getRoom();
	string toString();

private:
	string room;
};

