#include "decorator.hpp"
#include "component.hpp"
#include <iostream>

int main() {
    Cake* plainCake = new PlainCake();
    std::cout << "Plain cake : " << plainCake->getDetails() << " | Cost : " << plainCake->cost() << '\n';

    Cake* chocolateCake = new ChocolateDecorator(plainCake);
    std::cout << "Chocolate cake : " << chocolateCake->getDetails() << " | Cost : " << chocolateCake->cost() << '\n';

    Cake* fruitCake = new FruitDecorator(plainCake);
    std::cout << "Fruit cake : " << fruitCake->getDetails() << " | Cost : " << fruitCake->cost() << '\n';

    Cake* chocolatyFruitCake = new ChocolateDecorator(new FruitDecorator(plainCake));
    std::cout << "Chocolaty Fruit cake : " << chocolatyFruitCake->getDetails() << " | Cost : " << chocolatyFruitCake->cost() << '\n';

    return 0;
}
