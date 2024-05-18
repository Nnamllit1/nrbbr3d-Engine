#pragma once

#include <string>

class log
{
public:
	static bool log_print(std::string typ, std::string modul, std::string message);
	static bool log_print_debug(std::string typ, std::string modul, std::string message);
};

