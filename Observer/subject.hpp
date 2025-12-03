#pragma once
#include "observer.hpp"
#include <unordered_map>

class Subject {
public:
    virtual void addObserver(Observer* observer) = 0;
    virtual void removeObserver(Observer* observer) = 0;
    virtual void notifyObservers() = 0;
};

class WeatherStation : public Subject {
public:
    void addObserver(Observer* observer) override;
    void removeObserver(Observer* observer) override;
    void notifyObservers() override;
    void setWeather(const std::string &weather);
private:
    std::string weather;
    std::unordered_map<Observer*, bool>observers;
};
