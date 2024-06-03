#include<iostream>
#include <filesystem>
#include <fstream>
#include <algorithm>
#include "../headers/util.h"
using namespace std;
void listUsernames(){
    ifstream in("../user_files/current_user.txt"); //getting current user
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

            ofstream f("../user_files/current_user.txt"); //puts username as current username
            f<<username;
            f.close();
            cout<<"logged in as: "<<username<<endl;
            return;
        }
    }
    cout<<"username not found"<<endl;
}

void newUser(string username){
    string path = "../user_files";
    for(const auto &entry:filesystem::directory_iterator(path)){
        if(entry.path().string().find(username + ".csv") != string::npos){
            cout<<"username already exists.";
            return;
        }
    }
    ofstream createFile("../user_files/"+username+".csv");
    createFile.close();
    cout<<"username "<<username<<" created";
}

void deleteUser(string username){
    string path = "../user_files";
    for(const auto& entry: filesystem::directory_iterator(path)){
        if(entry.path().string().find(username+".csv") != string::npos){
            filesystem::remove("../user_files/"+ username + ".csv");
            cout<<"user "<<username<<" deleted";
            return;
        }
    }
    cout<<"username "<<username<<" does not exist";
}

void saveUser(user *user){
    ifstream in("../user_files/current_user.txt");
    string currentUser;
    getline(in,currentUser);
    in.close();
    ofstream out("../user_files/"+currentUser+".csv");
    out<<*user;
    out.close();
}

void search(vector<string> intrariToString, string keyword){
    int ok = 0;
    for(string e: intrariToString){
        if(e.find(keyword) != string::npos){
            cout<<e;
            ok = 1;
        }
    }
    if(ok == 0){
        cout<<"no results found";
    }
}


bool isNumber(const string& s) {
    return !s.empty() && find_if(s.begin(), s.end(), [](unsigned char c) { return !isdigit(c); }) == s.end();
}

bool isDouble(const string& s) {
    char* endptr = nullptr;
    strtod(s.c_str(), &endptr);
    return endptr != s.c_str() && *endptr == '\0';
}

bool isValidCommand(const string& command, const vector<string>& validCommands) {
    return find(validCommands.begin(), validCommands.end(), command) != validCommands.end();
}


void helpMessage() {
    cout << "Usage: <exe> [command] [options]\n";
    cout << "Commands:\n";
    cout << "  -lu                      List all usernames\n";
    cout << "  -ls                      List all entries for the current user\n";
    cout << "  -ls <keyword>            Search entries for the current user containing the term\n";
    cout << "  -login <username>        Log in as the specified username\n";
    cout << "  -delete user <username>  Delete the specified user\n";
    cout << "  -delete entry <index>    Delete the entry at the specified index\n";
    cout << "  -new user <username>     Create a new user with the specified name\n";
    cout << "  -new entry <amount> <transactor> <date> <category>\n";
    cout << "                        Add a new entry with the specified amount, date, description, and category\n";
}