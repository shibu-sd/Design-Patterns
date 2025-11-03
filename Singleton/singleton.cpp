#include "singleton.hpp"
#include <iostream>

LoggerSingleton* LoggerSingleton::instance = nullptr;
std::mutex LoggerSingleton::mtx;

LoggerSingleton* LoggerSingleton::getInstance() {
    std::lock_guard<std::mutex> lock(mtx); // handles lock and unlock automatically + expection safe
    if (instance == nullptr) {
        instance = new LoggerSingleton();
    }

    return instance;
}

void LoggerSingleton::info(const std::string &message) {
    std::cout << "[info] " << message << '\n';
}

void LoggerSingleton::debug(const std::string &message) {
    std::cout << "[debug] " << message << '\n';
}

void LoggerSingleton::warn(const std::string &message) {
    std::cout << "[warn] " << message << '\n';
}

void LoggerSingleton::error(const std::string &message) {
    std::cout << "[error] " << message << '\n';
}
