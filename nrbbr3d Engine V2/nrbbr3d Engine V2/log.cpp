#include "log.h"
#include <string>
#include <iostream>

bool log::log_print_debug(std::string typ, std::string modul, std::string masage)
{
    std::cout << "Type: " << typ << ", Module: " << modul << ", Message: " << masage << std::endl;
    return true;
}

bool log::log_print(std::string typ, std::string modul, std::string masage)
{
    std::cout << typ << ", Module: " << modul << ", " << masage << std::endl;
    return true;
}
