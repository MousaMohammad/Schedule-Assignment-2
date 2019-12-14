#pragma once
#include "Action.h"

class Sequence :public Action
{
private:
	int length, maximumLength;
	Action** actions;
public:
	Sequence(int maxlen);
	 Action*& operator<<( Action* action);
	friend ostream& operator<<(ostream& out, const Action& action);
	void setl(int l);
	int getl();
	virtual void print(ostream& out) const;
	~Sequence();


};


