// Copyright 2022 NNTU-CS
#include <iostream>
#include <vector>

#include "tree.h"

int main() {
    std::vector<char> in = {'1', '2', '3'};
    PMTree tree(in);
    std::vector<std::vector<char>> perms;
    perms = getAllPerms(tree);
    std::cout << "All permutations:" << std::endl;
    for (int i = 0; i < static_cast<int>(perms.size()); i++) {
        for (int j = 0; j < static_cast<int>(perms[i].size()); j++) {
            std::cout << perms[i][j];
        }
        std::cout << std::endl;
    }
    std::vector<char> p1;
    p1 = getPerm1(tree, 1);
    std::cout << std::endl;
    std::cout << "Permutation 1: ";
    for (int i = 0; i < static_cast<int>(p1.size()); i++) {
        std::cout << p1[i];
    }
    std::cout << std::endl;
    std::vector<char> p2;
    p2 = getPerm2(tree, 2);
    std::cout << "Permutation 2: ";
    for (int i = 0; i < static_cast<int>(p2.size()); i++) {
        std::cout << p2[i];
    }
    std::cout << std::endl;
    return 0;
}
