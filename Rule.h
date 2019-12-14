#pragma once
#include "Element.h"

class Rule
{

public:
	virtual bool match(Element, Element) = 0;
	virtual Element combine(Element, Element) = 0;


};