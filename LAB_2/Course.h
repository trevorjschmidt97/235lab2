#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Course
{
public:
	Course();
	~Course();

	string getCourse();
	string toString();

protected:
	string course;
};

