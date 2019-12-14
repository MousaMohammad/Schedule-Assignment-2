#pragma once
#include"Alchemy.h"
#include<string>

class Element
{
	Alchemy* alchemy;
	std::string name;
protected:
	
	
public:
	Element(Alchemy*, std::string); // should be protected
	
	friend Alchemy;
	Element operator+(Element);
	bool operator==(Element);
	operator std::string();


};