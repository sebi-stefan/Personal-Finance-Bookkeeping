//
// Created by sebi on 24.05.2024.
//
#include<iostream>
#include<fstream>
#include <iomanip>
#include "user.h"

user::user(const std::string& localFilePath, const std::string& userName) { //user from csv file
    if(localFilePath.find(userName) != std::string::npos){
        std::ifstream file(localFilePath);
        string linieIntrare;
        if(file.is_open()){
            while(getline(file, linieIntrare)){
                this->intrari.push_back(new intrare(linieIntrare));
            }
            file.close();
        }
    }
    else{
        std::cout<<"error: UserNotFound or FileNotFound";
    }
}

ostream &operator<<(ostream &os, const user &user) { // scriere user csv style
    for(intrare* e: user.intrari){
        cout<<e;
    }
    return os;
}

void user::afisareConsola() {
    unsigned int maxLengthTip = 0;
    unsigned int maxLengthSuma = 0;
    unsigned int maxLengthTranzactor = 0;
    unsigned int maxLengthData = 0;
    unsigned int maxLengthCategorie = 0;
    for(intrare* e:this->intrari){
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

//    string tipSpaces(maxLengthTip, ' ');
//    string sumaSpaces(maxLengthSuma, ' ');
//    string tranzactorSpaces(maxLengthTranzactor, ' ');
//    string dataSpaces(maxLengthData, ' ');
//    string categorieSpaces(maxLengthCategorie, ' ');
//    cout<<"   "<<"Tip"<<tipSpaces<<" "<<"Suma"<<sumaSpaces<<" "<<"Tranzactor"<<tranzactorSpaces<<" "<<"Data"<<dataSpaces<<" "<<"Categorie"<<endl;
//    cout<<endl;
//    for(int i = 0; i<this->intrari.size();i++){
//        cout<<i+1<<". "<<this->intrari[i]->getTip()<<tipSpaces<<" "<<this->intrari[i]->getSuma()<<sumaSpaces<<" "<<this->intrari[i]->getTranzactor()<<tranzactorSpaces<<" "<<this->intrari[i]->getData()<<dataSpaces<<" "<<this->intrari[i]->getCategorie()<<endl;
//    }
    for(int i = 0; i<this->intrari.size();i++){
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
