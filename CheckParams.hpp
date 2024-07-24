#ifndef CHECK_PARAMS_HPP
#define CHECK_PARAMS_HPP

#include <vector>
#include <string>
#include <iostream>
#include <map>

namespace BMS 
{
	static float minTemperature = 0;
	static float maxTemperature = 45;
	static float minSoc = 20;
	static float maxSoc = 80;
	static float minCharge = 0.1;
	static float MaxCharge = 0.8;

	enum LANGUAGE_OPTION : int 
    {
        ENGLISH = 0,
        GERMAN = 1
    };

	static std::vector<std::vector<std::string>> message = { { "OK.", "OK."},
														{ "WARNING: Parameter is in border range.", "WARNING: Parameter is in the limit range."},
														{ "ERROR: Not in Range! Please check.", "ERROR: Not within range! Please check."}
													  };
}
#endif 
