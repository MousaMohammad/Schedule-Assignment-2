#pragma once
#include"Action.h"

class ClickAction : public Action
{
private:

public:
	ClickAction();
	~ClickAction();
	friend ostream& operator<<(ostream& out, const Action& action);
	virtual void print(ostream& out)const;

};

