#include "HeatRule.h"

HeatRule::HeatRule(Alchemy* alch)
{
	alchemy = alch;
}

bool HeatRule::match(Element element1, Element element2)
{
	if ((std::string)element1 == "heat")
	{
		return true;
	}
}
Element HeatRule::combine(Element element1, Element element2)
{
	
	return Element(alchemy , "hot " + (std::string)element2);
} 