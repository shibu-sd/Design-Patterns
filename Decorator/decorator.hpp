#include "component.hpp"

class CakeDecorator : public Cake {
protected:
    Cake *cake;
public:
    CakeDecorator(Cake *cake);
    std::string getDetails() const override;
    double cost() const override;
};

class ChocolateDecorator : public CakeDecorator {
public:
    ChocolateDecorator(Cake *cake);
    std::string getDetails() const override;
    double cost() const override;
};

class FruitDecorator : public CakeDecorator {
public:
    FruitDecorator(Cake *cake);
    std::string getDetails() const override;
    double cost() const override;
};
