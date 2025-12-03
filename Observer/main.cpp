#include "subject.hpp"
#include "observer.hpp"

int main() {
    WeatherStation* weatherStation = new WeatherStation();
    PhoneDisplay* phoneDisplay = new PhoneDisplay();
    TVDisplay* tvDisplay = new TVDisplay();

    weatherStation->addObserver(phoneDisplay);
    weatherStation->addObserver(tvDisplay);

    weatherStation->setWeather("Rainy");
    weatherStation->setWeather("Sunny");

    weatherStation->removeObserver(phoneDisplay);

    weatherStation->setWeather("Cloudy");

    return 0;
}
