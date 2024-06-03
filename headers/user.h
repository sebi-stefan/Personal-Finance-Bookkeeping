#include<vector>
#include <ostream>
#include"intrare.h"
using namespace std;

#ifndef CLASEPP_USER_H
#define CLASEPP_USER_H


class user {
    vector<intrare*> intrari;
public:
    user();
    friend ostream &operator<<(ostream &os, const user &user);
    vector<string> intrariToString();
    void addEntry(double suma, string tranzactor, string data, string categorie);
    void deleteEntry(int entry);
};


#endif //CLASEPP_USER_H
