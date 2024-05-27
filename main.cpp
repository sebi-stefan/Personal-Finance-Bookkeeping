#include<iostream>
#include<vector>
#include <filesystem>
#include"intrare.h"
#include"user.h"
#include"util.h"
using namespace std;
int main(int argc, char **argv) {

//    login(argv[1]);
//    listUsernames();
    user *u = new user("../user_files/test2.csv", "test2");
    u->afisareConsola();
}




