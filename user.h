//
// Created by sebi on 24.05.2024.
//
#include<vector>
#include <ostream>
#include"intrare.h"
using namespace std;

#ifndef CLASEPP_USER_H
#define CLASEPP_USER_H


class user {
    vector<intrare> intrari;
public:
    user(const string& localFilePath, const string& userName);

    friend ostream &operator<<(ostream &os, const user &user);
};


#endif //CLASEPP_USER_H
