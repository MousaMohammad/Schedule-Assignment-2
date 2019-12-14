#include "MoveMouseAction.h"

MoveMouseAction::MoveMouseAction(int x, int y)
{
	this->x = x;
	this->y = y;
}

void MoveMouseAction::print(ostream& out)const
{
	out << x << " " << y<<endl;
}

MoveMouseAction::~MoveMouseAction()
{
}
