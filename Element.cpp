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