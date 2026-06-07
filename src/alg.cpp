// Copyright 2022 NNTU-CS
#include  <iostream>
#include  <fstream>
#include  <locale>
#include  <cstdlib>
#include  "tree.h"
#include <vector>

using std::vector;

void DFS(Node* node,
         vector<char>& cur,
         vector<vector<char>>& perms) {
    if (node->value != 0)
        cur.push_back(node->value);
    if (node->child.empty()) {
        if (!cur.empty())
            perms.push_back(cur);
    }
    for (int i = 0; i < static_cast<int>(node->child.size()); i++) {
        DFS(node->child[i], cur, perms);
    }
    if (node->value != 0)
        cur.pop_back();
}

vector<vector<char>> getAllPerms(PMTree& tree) {
    vector<vector<char>> perms;
    vector<char> cur;
    DFS(tree.root, cur, perms);
    return perms;
}

vector<char> getPerm1(PMTree& tree, int num) {
    vector<vector<char>> perms = getAllPerms(tree);
    if (num < 1)
        return {};
    if (num > static_cast<int>(perms.size()))
        return {};
    return perms[num - 1];
}

vector<char> getPerm2(PMTree& tree, int num) {
    vector<vector<char>> perms = getAllPerms(tree);
    if (num < 1)
        return {};
    if (num > static_cast<int>(perms.size()))
        return {};
    return perms[num - 1];
}
