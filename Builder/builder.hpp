#pragma once

#include "product.hpp"

class BurgerBuilder {
private:
    int size;
    bool cheese;
    bool tomato;
    bool onion;
public:
    BurgerBuilder(int size);

    BurgerBuilder* addCheese();
    BurgerBuilder* addTomato();
    BurgerBuilder* addOnion();

    Burger* build();
};
