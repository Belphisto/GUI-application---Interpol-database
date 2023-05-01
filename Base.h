#pragma once

#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <ctime>
#include <vector>
#include "Criminal.h"
#include "Gang.h"

using namespace std;

class Base
{
private:
	vector <Gang> AllGangs;
	vector <Criminal> AllCriminal;
public:
	Base(vector <Gang> _AllGangs, vector <Criminal> _AllCriminal)
	{
		AllGangs = _AllGangs; AllCriminal = _AllCriminal;
	}
};