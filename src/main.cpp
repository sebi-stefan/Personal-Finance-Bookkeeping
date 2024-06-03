#include<iostream>
#include<vector>
#include <filesystem>
#include"../headers/intrare.h"
#include"../headers/user.h"
#include"../headers/util.h"
using namespace std;
int main(int argc, char **argv) {

    // login(argv[1]);
//    listUsernames();
    user *u = new user();
    vector<string> idk = u->intrariToString();
    for(string e: idk){
        cout<<e;
    }

//    if(argc < 2){
//        cout<<"help function";
//    }
//    else if(string(argv[1]) == "-login" && argc == 3){
//        login(argv[2]);
//    }
//    else if(string(argv[1]) == "-lu" && argc == 2){
//        listUsernames();
//    }


}




