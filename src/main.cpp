#include<iostream>
#include<vector>
#include <filesystem>
#include"../headers/intrare.h"
#include"../headers/user.h"
#include"../headers/util.h"
using namespace std;
int main(int argc, char **argv) {

    login(argv[1]);
//    listUsernames();
    user *u = new user();
    listUsernames();
    u->afisareConsola();
//    switch ()
//    cout<<argc<<endl;
//    for(int i =0;i<argc;i++){
//        cout<<argv[i]<<endl;
//    }
//    vector<int>numere = {1,2,3,4,5,6,7,8,9};
//    numere.erase(numere.begin()+3);
//    for(int e:numere){
//        cout<<e<<" ";
//    }
}




