#pragma once
#include <iostream>
using namespace std;

class Action
{
private:

public:
	Action();
	~Action();
	virtual void print(ostream& out)const = 0;


};

