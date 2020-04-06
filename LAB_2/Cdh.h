#pragma once
#include "Course.h"

class Cdh : public Course
{
public:
	Cdh();
	~Cdh();

	string getDay();
	string getHour();
	string toString();

private:
	string day;
	string hour;

};

