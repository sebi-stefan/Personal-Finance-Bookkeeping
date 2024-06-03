#include<iostream>
#include<fstream>
#include <cmath>
#include "../headers/user.h"

user::user() { //user from csv file
    ifstream f("../user_files/current_user.txt");
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

vector<string> user::intrariToString() {
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
    vector<string> intrariString;
    for(int i = 0; i<this->intrari.size();i++){ // formats attributes for console display
        string intrareString;
        intrareString.append(to_string(i+1)).append(". ");


        if((i+1)/10 < 1){
            intrareString.append(" ");

        }

        unsigned int tipDifference = maxLengthTip - this->intrari[i]->getTip().size();
        intrareString.append(this->intrari[i]->getTip()).append("  ");
        while(tipDifference > 0){
            intrareString.append(" ");
            tipDifference--;
        }

        unsigned int sumaDifference = maxLengthSuma - to_string(this->intrari[i]->getSuma()).size();
        intrareString.append(to_string(round(this->intrari[i]->getSuma() * 100.0)/100.0)).pop_back();
        intrareString.pop_back();intrareString.pop_back();intrareString.pop_back();
        intrareString.append("  ");
        while(sumaDifference > 0){
            intrareString.append(" ");
            sumaDifference--;
        }

        unsigned int tranzactorDifference = maxLengthTranzactor - this->intrari[i]->getTranzactor().size();
        intrareString.append(this->intrari[i]->getTranzactor()).append("  ");
        while(tranzactorDifference > 0){
            intrareString.append(" ");
            tranzactorDifference--;
        }

        unsigned int dataDifference = maxLengthData - this->intrari[i]->getData().size();
        intrareString.append(this->intrari[i]->getData()).append("  ");
        while(dataDifference > 0){
            intrareString.append(" ");
            dataDifference--;
        }

        unsigned int categorieDifference = maxLengthCategorie - this->intrari[i]->getCategorie().size();
        intrareString.append(this->intrari[i]->getCategorie()).append("  ");
        while(categorieDifference > 0){
            intrareString.append(" ");
            categorieDifference--;
        }
        intrareString.append("\n");
        intrariString.push_back(intrareString);

    }
    return intrariString;
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



