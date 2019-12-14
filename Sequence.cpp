#include "Sequence.h"

Sequence::Sequence(int maxlen)
{
	maximumLength = maxlen;
	actions = new Action*[maximumLength];
	length = 0;
}

Action*& Sequence::operator<<(Action* action)
{
	if (action != NULL && this->length < this->maximumLength)
	{
		actions[length] = action;
		length++;
	}
	return this->actions[length];
}


void Sequence::setl(int l)
{
	length = l;
}

int Sequence::getl()
{
	return length;
}

void Sequence::print(ostream& out)const
{
	for (int i = 0; i < length ; i++)
	{
		actions[i]->print(out);

	}
	out << length;
}

Sequence::~Sequence()
{
}

ostream& operator<<(ostream& out, const Action& action)
{
	action.print(out);
	return out;
}
