#include "Element.h"


Element::Element(Alchemy* alch, std::string n)
{
	name = n;

	alchemy = alch;
}



Element::operator std::string()
{
	return name;
}

Element Element::operator+(Element e)
{
	return alchemy->combine(*this, e);
}
bool Element::operator==(Element e)
{
	if (name == e.name && alchemy == e.alchemy)
	{
		return true;
	}
}