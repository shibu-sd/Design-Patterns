#include "observer.hpp"
#include <iostream>

void PhoneDisplay::update(const std::string &weather) {
    this->weather = weather;
    this->display();
}

void PhoneDisplay::display() {
    std::cout << "[Phone Display] Weather update : " << this->weather << '\n';
}

void TVDisplay::update(const std::string &weather) {
    this->weather = weather;
    this->display();
}

void TVDisplay::display() {
    std::cout << "[TV Display] Weather update : " << this->weather << '\n';
}
