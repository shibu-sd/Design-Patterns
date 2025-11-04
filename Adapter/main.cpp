#include "legacy.hpp"
#include "modern.hpp"
#include "adapter.hpp"

int main() {
    ModernComputer *modernComputer = new ModernComputer();
    LegacyPrinter *legacyPrinter = new LegacyPrinter();
    LegacyPrinterAdapter *legacyPrinterAdapter = new LegacyPrinterAdapter(legacyPrinter);

    modernComputer->sendCommand("This is lowercase");
    legacyPrinterAdapter->sendCommand("This is uppercase");

    delete modernComputer;
    delete legacyPrinter;
    delete legacyPrinterAdapter;

    return 0;
}
