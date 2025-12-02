#include "context.hpp"

void SortingContext::setStrategy(SortingStrategy* strategy) {
    this->strategy = strategy;
}

void SortingContext::executeStrategy(std::vector<int>&a) {
    this->strategy->sort(a);
}
