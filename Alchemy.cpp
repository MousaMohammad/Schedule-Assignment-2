#include "Alchemy.h"

Alchemy::Alchemy(int r)
{
	ruleCount = (r > 0 ) ? r : 0;
	rules = new Rule * [ruleCount];
	for (int i = 0; i < ruleCount; i++)
	{
		rules[i] = NULL;
	}
}

Element Alchemy::operator[](std::string n)
{
	Element e(this, n);

}
Rule*& Alchemy::operator[](int index)
{
	return rules[index];
}
Element Alchemy::combine(Element element1, Element element2)
{
	for (int i = 0; i < ruleCount; i++)
	{
		if (rules[i]->match(element1,element2))
		{
			return rules[i]->combine(element1, element2);
		}
		else if(rules[i]->match(element2, element1))
		{
			return rules[i]->combine(element2, element1);
		}
	}
	return Element(this,"nothing");

}


Alchemy::~Alchemy()
{
	delete[] rules;
}