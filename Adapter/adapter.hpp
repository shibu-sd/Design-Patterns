#pragma once

#include "legacy.hpp"

class LegacyPrinterAdapter {
public:
    LegacyPrinterAdapter(LegacyPrinter *legacyPrinter);
    void sendCommand(const std::string &command);

private:
    LegacyPrinter *legacyPrinter;
};
