#pragma once
#include <string>

class Cake {
public:
    virtual std::string getDetails() const = 0;
    virtual double cost() const = 0;
    virtual ~Cake() {}
};

class PlainCake : public Cake {
public:
    std::string getDetails() const override;
    double cost() const override;
};
