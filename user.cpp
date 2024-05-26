//
// Created by sebi on 24.05.2024.
//
#include<iostream>
#include<fstream>
#include "user.h"

user::user(const std::string& localFilePath, const std::string& userName) { //user from csv file
    if(localFilePath.find(userName) != std::string::npos){
        std::ifstream file(localFilePath);
        string linieIntrare;
        if(file.is_open()){
            while(getline(file, linieIntrare)){
                this->intrari.push_back(*new intrare(linieIntrare));
            }
            file.close();
        }
    }
    else{
        std::cout<<"error: UserNotFound or FileNotFound";
    }
}

ostream &operator<<(ostream &os, const user &user) { // scriere user csv style
    for(intrare e: user.intrari){
        cout<<e;
    }
    return os;
}
