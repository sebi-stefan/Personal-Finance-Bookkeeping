#include"intrare.h"
#include"user.h"
using namespace std;
#ifndef CLASEPP_UTIL_H
#define CLASEPP_UTIL_H

void login(const string& username);

void listUsernames();

void newUser(string username);

void deleteUser(string username);

void saveUser(user* user);

void search(vector<string> intrariToString, string keyword);

bool isNumber(const std::string& s);

bool isDouble(const std::string& s);


bool isValidCommand(const std::string& command, const std::vector<std::string>& validCommands);

void helpMessage();
#endif //CLASEPP_UTIL_H
