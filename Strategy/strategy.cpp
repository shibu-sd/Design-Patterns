#include "strategy.hpp"
#include <iostream>

void BubbleSortStrategy::sort(std::vector<int>&a) {
    std::cout << "Bubble Sort called ..." << '\n';
    for (int i = 0; i < a.size(); i++) {
        for (int j = 1; j < a.size() - i; j++) {
            if (a[j] < a[j - 1]) {
                std::swap(a[j], a[j - 1]);
            }
        }
    }
}

void InsertionSortStrategy::sort(std::vector<int>&a) {
    std::cout << "Insertion Sort called ..." << '\n';
    for (int i = 1; i < a.size(); i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

void SelectionSortStrategy::sort(std::vector<int>&a) {
    std::cout << "Selection Sort called ..." << '\n';
    for (int i = 0; i < a.size(); i++) {
        int m = i;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] < a[m]) {
                m = j;
            }
        }
        std::swap(a[i], a[m]);
    }
}
