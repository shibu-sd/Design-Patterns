#pragma once
#include <vector>

class SortingStrategy {
public:
    virtual void sort(std::vector<int>&a) = 0;
    virtual ~SortingStrategy() {}
};

class BubbleSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>&a) override;
};

class InsertionSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>&a) override;
};

class SelectionSortStrategy : public SortingStrategy {
public:
    void sort(std::vector<int>&a) override;
};
