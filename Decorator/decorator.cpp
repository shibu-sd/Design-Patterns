#include "decorator.hpp"

CakeDecorator::CakeDecorator(Cake *cake) : cake(cake) {
}

std::string CakeDecorator::getDetails() const {
    return cake->getDetails();
}

double CakeDecorator::cost() const {
    return cake->cost();
}

ChocolateDecorator::ChocolateDecorator(Cake *cake) : CakeDecorator(cake) {
}

std::string ChocolateDecorator::getDetails() const {
    return cake->getDetails() + " with chocolate";
}

double ChocolateDecorator::cost() const {
    return cake->cost() + 200.0;
}

FruitDecorator::FruitDecorator(Cake *cake) : CakeDecorator(cake) {
}

std::string FruitDecorator::getDetails() const {
    return cake->getDetails() + " with fruits";
}

double FruitDecorator::cost() const {
    return cake->cost() + 150.0;
}
