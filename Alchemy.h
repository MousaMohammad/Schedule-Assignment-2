#pragma once
#include"Rule.h"

class Alchemy
{
	int ruleCount;
	Rule** rules;
public:
	Alchemy(int);

	Element operator[](std::string);
	Rule*& operator[](int);
	Element combine(Element, Element);
	~Alchemy();
};