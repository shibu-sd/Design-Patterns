#include "context.hpp"
#include "strategy.hpp"
#include <vector>
#include <iostream>

void printArray(std::vector<int>&a) {
    for (int &element : a) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int>a = {3, 1, 4, 2};
    std::vector<int>b = {1, 2, 4, 3};
    std::vector<int>c = {4, 3, 2, 1};

    SortingContext* context = new SortingContext();

    context->setStrategy(new BubbleSortStrategy());
    context->executeStrategy(a);
    printArray(a);

    context->setStrategy(new InsertionSortStrategy());
    context->executeStrategy(b);
    printArray(b);

    context->setStrategy(new SelectionSortStrategy());
    context->executeStrategy(c);
    printArray(c);

    return 0;
}
