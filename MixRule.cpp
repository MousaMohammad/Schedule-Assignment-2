#include "MixRule.h"

MixRule::MixRule(Element in1, Element in2, Element out)
	:input1(in1), input2(in2) , output(out)
{
}

bool MixRule::match(Element element1, Element element2)
{
	if (element1 == input1 && element2 == input2)
	{
		return true;
	}
	return false;
}
Element MixRule::combine(Element element1, Element element2)
{
	output = element1 + element2;
	return output;
}