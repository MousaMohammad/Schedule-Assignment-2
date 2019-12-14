#include <iostream>
#include <string>
#include "MoveMouseAction.h"
#include "ClickAction.h"
#include "Sequence.h"

// TODO: Write the global function readAction
Action* readAction()
{
	char action;
	cin >> action;
	Action* read ;
	if (action == 'c') {
		read = new ClickAction ;
		 
		return read;
	}
	else if (action == 'm')
	{
		int x, y;
		cin >> x >> y;
		read = new MoveMouseAction(x, y);
		return read;
	}
	else if (action == 's')
	{
		int l, ml;
		cin >> ml;
		char act;
		read = new Sequence(ml);
		
		for (int i = 0; i < ml; i++)
		{
			*(dynamic_cast<Sequence*>(read)) << readAction();
			
		}
		
		return read;

	}
	else return NULL;
}

int main()
{
	Action* action = readAction();
	std::cout << *action;
	delete action;
}
