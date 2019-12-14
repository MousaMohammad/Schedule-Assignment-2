#pragma once
#include"Action.h"

class MoveMouseAction :public Action
{
private:
	int x, y;
public:
	MoveMouseAction (int x ,int y);
	virtual void print(ostream& out)const;
	friend ostream& operator<<(ostream& out, const Action& action);
	~MoveMouseAction();



};

