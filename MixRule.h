#pragma once
#include"Element.h"
#include"Rule.h"

class MixRule : public Rule
{
	Element input1;
	Element input2;
	Element output;
public:
	MixRule(Element,Element, Element );
	bool match(Element, Element);
	Element combine(Element, Element);
};