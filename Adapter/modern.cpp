#include "modern.hpp"
#include <iostream>

void ModernComputer::sendCommand(const std::string &command) {
    std::cout << "Sending : " << command << '\n';
}
