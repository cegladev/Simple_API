#pragma once
#include <string>
#include "InputTypes.h"

class InputParses
{
public:
	InputParses(std::string input = "");

	void		setInput(std::string input) { sInput = input; };
	std::string	getInput() { return sInput; };
	InputTypes			getInputType(std::string input) { setInput(input); return getInputType(); };
	InputTypes			getInputType();
private:
	std::string	sInput;
};

