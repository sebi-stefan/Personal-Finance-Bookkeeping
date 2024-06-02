
#pragma once
#include <string>
#include <ostream>

using namespace std;
#ifndef CLASEPP_INTRARE_H
#define CLASEPP_INTRARE_H


class intrare {
    string tip;
    double suma;
    string tranzactor;
    string data;
    string categorie;
public:
    friend ostream &operator<<(ostream &os, const intrare &intrare);
    explicit intrare(string csvFormatString);
    intrare(string, double, string, string);
    intrare(string, double, string, string, string);


// Getters and setters
    const string &getTip() const {
        return tip;
    }
    double getSuma() const {
        return suma;
    }
    const string &getTranzactor() const {
        return tranzactor;
    }
    const string &getData() const {
        return data;
    }
    const string &getCategorie() const {
        return categorie;
    }

    void setTip(const string &tip) {
        intrare::tip = tip;
    }

    void setSuma(double suma) {
        intrare::suma = suma;
    }

    void setTranzactor(const string &tranzactor) {
        intrare::tranzactor = tranzactor;
    }

    void setData(const string &data) {
        intrare::data = data;
    }

    void setCategorie(const string &categorie) {
        intrare::categorie = categorie;
    }
};


#endif //CLASEPP_INTRARE_H
