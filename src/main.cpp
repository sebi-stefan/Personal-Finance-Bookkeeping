#include<iostream>
#include<vector>
#include"../headers/intrare.h"
#include"../headers/user.h"
#include"../headers/util.h"
using namespace std;
int main(int argc, char **argv) {

    vector<string> validCommands = {"-lu", "-ls", "-login", "-delete", "-new"};
    vector<string> validDeleteArgs = {"user", "entry"};
    vector<string> validNewArgs = {"user", "entry"};

    user *current_user = new user();

    if (argc < 2) {
        helpMessage();
        return 0;
    }

    string command = argv[1];

    if (!isValidCommand(command, validCommands)) {
        cerr << "Invalid command." << endl;
        return 1;
    }

    if (argc == 2) {
        if (command == "-lu") {
            listUsernames();
        } else if (command == "-ls") {
            for (const string &entry: current_user->intrariToString()) {
                cout << entry << endl;
            }
        }
    } else if (argc == 3) {
        if (command == "-ls") {
            search(current_user->intrariToString(), argv[2]);
        } else if (command == "-login") {
            login(argv[2]);
        }
    } else if (argc == 4) {
        string subCommand = argv[2];
        if (command == "-delete") {
            if (!isValidCommand(subCommand, validDeleteArgs)) {
                cerr << "Invalid subcommand for delete." << endl;
                return 1;
            }
            if (subCommand == "user") {
                deleteUser(argv[3]);
            } else if (subCommand == "entry") {
                if (!isNumber(argv[3])) {
                    cerr << "Entry index must be a number." << endl;
                    return 1;
                }
                current_user->deleteEntry(atoi(argv[3]));
                saveUser(current_user);
            }
        } else if (command == "-new" && subCommand == "user") {
            newUser(argv[3]);
        }
    } else if (argc == 7) {
        if (command == "-new" && string(argv[2]) == "entry") {
            if (!isDouble(argv[3])) {
                cerr << "Amount must be a valid number." << endl;
                return 1;
            }
            current_user->addEntry(stod(argv[3]), argv[4], argv[5], argv[6]);
            saveUser(current_user);
        }
    } else {
        cerr << "Invalid number of arguments." << endl;
        return 1;
    }
}

