//
// Created by sebi on 25.05.2024.
//
#include<iostream>
#include<filesystem>
#include <fstream>
#include "../headers/util.h"

void listUsernames(){
    ifstream in("../user_files/LAST_USER.txt"); //getting current user
    string currentUser;

    string path = "../user_files"; //directory of usernames
    getline(in, currentUser);

    for (const auto &entry: filesystem::directory_iterator(path)){ // iterates over all files with .csv extention
//        std::cout << entry.path() << std::endl;
        string filepath = entry.path().string();
        if(filepath.find(".csv")!=string::npos){

            size_t slash = filepath.find_last_of('/'); //gets only the username from relative file path
            size_t dot = filepath.find_last_of('.');
            for(size_t i = slash+1; i<dot;i++){
                cout<<filepath[i];
            }

            if(filepath.find(currentUser)!=string::npos){ // adds asterix only next to current user
                cout<<" *";
            }
            cout<<endl;
        }
    }
}


void login(const string& username){
    std::string path = "../user_files";
    for (const auto &entry: std::filesystem::directory_iterator(path)){ //iterates over all csv files

        if(entry.path().string().find(username+".csv") != string::npos){ //if found, logs into specified username

            ofstream f("../user_files/LAST_USER.txt"); //puts username as current username
            f<<username;
            f.close();
            cout<<"logged in as: "<<username<<endl;
            return;
        }
    }
    cout<<"username not found"<<endl;
}