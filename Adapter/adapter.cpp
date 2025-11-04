#include "adapter.hpp"
#include <cctype>

LegacyPrinterAdapter::LegacyPrinterAdapter(LegacyPrinter* legacyPrinter) {
    this->legacyPrinter = legacyPrinter;
}

void LegacyPrinterAdapter::sendCommand(const std::string &command) {
    std::string commandInUppercase = command;
    for (char &c : commandInUppercase) {
        c = std::toupper(c);
    }

    legacyPrinter->printInUppercase(commandInUppercase);
}
