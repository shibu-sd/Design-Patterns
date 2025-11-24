#include "builder.hpp"

BurgerBuilder::BurgerBuilder(int size) {
    this->size = size;
    this->cheese = false;
    this->tomato = false;
    this->onion = false;
}

BurgerBuilder* BurgerBuilder::addCheese() {
    this->cheese = true;
    return this;
}

BurgerBuilder* BurgerBuilder::addTomato() {
    this->tomato = true;
    return this;
}

BurgerBuilder* BurgerBuilder::addOnion() {
    this->onion = true;
    return this;
}

Burger* BurgerBuilder::build() {
    return new Burger(this->size, this->cheese, this->tomato, this->onion);
}
