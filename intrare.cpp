//
// Created by sebi on 23.05.2024.
//

#include <sstream>
#include <vector>
#include<ctime>
#include<iomanip>
#include "intrare.h"


ostream &operator<<(ostream &os, const intrare &intrare) {
    os << intrare.tip << "," << intrare.suma << "," << intrare.tranzactor << ","
       << intrare.data << "," << intrare.categorie<<endl;
    return os;
}

intrare::intrare(string csvFormatString) { // intrare from csv string
    string str;
    stringstream ss(csvFormatString);
    vector<string> atribute;
    while(getline(ss,str, ',')){
        atribute.push_back(str);
    }
    this->tip = atribute[0];
    this->suma = stod(atribute[1]);
    this->tranzactor = atribute[2];
    this->data = atribute[3];
    this->categorie = atribute[4];
}

intrare::intrare(string tip, double suma, string tranzactor, string categorie) { // intrare manuala cu data automata
    this->tip = tip;
    this->suma = suma;
    this->tranzactor = tranzactor;
    this->categorie = categorie;

    time_t t = time(nullptr);
    tm* localTime = localtime(&t);
    ostringstream oss;
    oss<<put_time(localTime, "%d.%m.%Y");
    this->data = oss.str();

}

intrare::intrare(string tip, double suma, string tranzactor, string data, string categorie) { //intrare manuala
    this->tip = tip;
    this->suma = suma;
    this->tranzactor = tranzactor;
    this->data = data;
    this->categorie = categorie;
}




