#include "subject.hpp"
#include "observer.hpp"

void WeatherStation::addObserver(Observer* observer) {
    if (observers.find(observer) == observers.end()) {
        observers[observer] = 1;
    }
}

void WeatherStation::removeObserver(Observer* observer) {
    if (observers.find(observer) != observers.end()) {
        observers.erase(observer);
    }
}

void WeatherStation::notifyObservers() {
    for (auto &itr : observers) {
        itr.first->update(weather);
    }
}

void WeatherStation::setWeather(const std::string &weather) {
    this->weather = weather;
    notifyObservers();
}
