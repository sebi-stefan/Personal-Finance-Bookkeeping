#include<iostream>
#include<ctime>
#include<vector>
#include <filesystem>
#include"intrare.h"
#include"user.h"

using namespace std;
int main() {

    vector<user> useri;
    std::string path = "../Users";
    for (const auto &entry: std::filesystem::directory_iterator(path)){
        std::cout << entry.path() << std::endl;
        user u = *new user(entry.path(),"test2");
        useri.push_back(u);
        cout<<u;
    }
    cout<<"gata";
}




