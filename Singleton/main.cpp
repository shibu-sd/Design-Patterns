#include "singleton.hpp"

int main() {
    LoggerSingleton *logger = LoggerSingleton::getInstance();

    logger->info("This is info message");
    logger->debug("This is debug message");
    logger->warn("This is warn message");
    logger->error("This is error message");

    return 0;
}
