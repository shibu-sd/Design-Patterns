#pragma once

#include <string>
#include <mutex>

class LoggerSingleton {
public:
    static LoggerSingleton* getInstance();

    void info(const std::string &message);
    void debug(const std::string &message);
    void warn(const std::string &message);
    void error(const std::string &message);

private:
    static LoggerSingleton* instance;
    static std::mutex mtx;
    LoggerSingleton() {}
};
