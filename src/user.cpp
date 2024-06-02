//
// Created by sebi on 24.05.2024.
//
#include<iostream>
#include<fstream>
#include <iomanip>
#include "../headers/user.h"

user::user() { //user from csv file
    ifstream f("../user_files/LAST_USER.txt");
    string currentUser;
    getline(f, currentUser);
    string userFilePath = "../user_files/" + currentUser + ".csv";
    if(userFilePath.find(currentUser+".csv") != string::npos){
        ifstream file(userFilePath);
        string linieIntrare;
        if(file.is_open()){
            while(getline(file, linieIntrare)){
                this->intrari.push_back(new intrare(linieIntrare));
            }
            file.close();
        }
    }
    else{
        cout<<"error: UserNotFound or FileNotFound";
    }
}

ostream &operator<<(ostream &os, const user &user) { // scriere user csv style
    for(intrare* e: user.intrari){
        os<<*e;
    }
    return os;
}

void user::afisareConsola() {
    unsigned int maxLengthTip = 0;
    unsigned int maxLengthSuma = 0;
    unsigned int maxLengthTranzactor = 0;
    unsigned int maxLengthData = 0;
    unsigned int maxLengthCategorie = 0;
    for(intrare* e:this->intrari){ // gets maxLength of every attribute
        if(maxLengthTip < e->getTip().size()){
            maxLengthTip = e->getTip().size();
        }
        if(maxLengthSuma < to_string(e->getSuma()).size()){
            maxLengthSuma = to_string(e->getSuma()).size();
        }
        if(maxLengthTranzactor < e->getTranzactor().size()){
            maxLengthTranzactor = e->getTranzactor().size();
        }
        if(maxLengthData < e->getData().size()){
            maxLengthData = e->getData().size();
        }
        if(maxLengthCategorie < e->getCategorie().size()){
            maxLengthCategorie = e->getCategorie().size();
        }
    }

    for(int i = 0; i<this->intrari.size();i++){ // formats attributes for console display
        cout<<i+1<<". ";

        if((i+1)/10 < 1){
            cout<<" ";
        }

        unsigned int tipDifference = maxLengthTip - this->intrari[i]->getTip().size();
        cout<<this->intrari[i]->getTip()<<"  ";
        while(tipDifference > 0){
            cout<<" ";
            tipDifference--;
        }

        unsigned int sumaDifference = maxLengthSuma - to_string(this->intrari[i]->getSuma()).size();
        cout<<fixed<<setprecision(2)<<this->intrari[i]->getSuma()<<"  ";
        while(sumaDifference > 0){
            cout<<" ";
            sumaDifference--;
        }

        unsigned int tranzactorDifference = maxLengthTranzactor - this->intrari[i]->getTranzactor().size();
        cout<<this->intrari[i]->getTranzactor()<<"  ";
        while(tranzactorDifference > 0){
            cout<<" ";
            tranzactorDifference--;
        }

        unsigned int dataDifference = maxLengthData - this->intrari[i]->getData().size();
        cout<<this->intrari[i]->getData()<<"  ";
        while(dataDifference > 0){
            cout<<" ";
            dataDifference--;
        }

        unsigned int categorieDifference = maxLengthCategorie - this->intrari[i]->getCategorie().size();
        cout<<this->intrari[i]->getCategorie()<<"  ";
        while(categorieDifference > 0){
            cout<<" ";
            categorieDifference--;
        }
        cout<<endl;
    }
}

void user::addEntry(double suma, string tranzactor, string data, string categorie){
    if(suma > 0){
        intrare *i = new intrare("venit", suma, tranzactor, data, categorie);
        this->intrari.push_back(i);
    }
    else{
        intrare *i = new intrare("cheltuiala", suma, tranzactor, data, categorie);
        this->intrari.push_back(i);
    }

}

void user::deleteEntry(int entry) {
    this->intrari.erase(this->intrari.begin()+entry+1);
}



