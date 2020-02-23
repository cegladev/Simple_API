#include "pch.h"
#include "InputParses.h"
#include <iostream>
#include <vector>

InputParses::InputParses(std::string input/*=""*/) :
	sInput(input)
{
}

InputTypes InputParses::getInputType()
{
	std::string::const_iterator  it = sInput.begin();
	bool wasThereDot = false;
	while(it != sInput.end()) {
		if (!iswdigit(*it)) {
			if (*it == '.' && !wasThereDot) {
				wasThereDot = true;
			}
			else {
				return InputTypes::STRING;
			}
		}
		it++;
	}

	if (wasThereDot) {
		return InputTypes::DOUBLE;
	}
	return InputTypes::INTIGER;
}
