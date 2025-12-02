#pragma once
#include "strategy.hpp"

class SortingContext {
public:
    void setStrategy(SortingStrategy* strategy);
    void executeStrategy(std::vector<int>&a);
private:
    SortingStrategy* strategy;
};
