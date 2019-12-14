#pragma once
#include "Rule.h"
#include "Alchemy.h"

class HeatRule : public Rule
{
	Alchemy* alchemy;
public:
	HeatRule(Alchemy*);

	bool match(Element, Element);
	Element combine(Element, Element);
};