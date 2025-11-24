#include <iostream>
#include "builder.hpp"
#include "product.hpp"

int main() {
    BurgerBuilder* builder = new BurgerBuilder(12);

    Burger* burger = builder->addCheese()->addTomato()->addOnion()->build();

    std::cout << "Burger with cheese : " << '\n';
    std::cout << "Has cheese ? " << burger->cheese << '\n';
    std::cout << "Has tomato ? " << burger->tomato << '\n';
    std::cout << "Has onion ? " << burger->onion << '\n';
    std::cout << '\n';
}
