#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

class Snap
{
public:
	Snap();
	~Snap();

	int getStudID();
	string getName();
	string getAddr();
	string getPhone();
	string ToString();

private:
	int studID;
	string name;
	string address;
	string phone;
};

