#pragma once
#include "Rule.h"
#include "Alchemy.h"
#include <iostream>

class HeatRule : public Rule
{
	Alchemy* alchemy;
public:
	HeatRule(Alchemy*);

	bool match(Element, Element);
	Element combine(Element, Element);
};