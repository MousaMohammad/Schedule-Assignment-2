#pragma once
#include"Rule.h"
#include <iostream>

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