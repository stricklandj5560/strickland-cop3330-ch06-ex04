/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Jonathan Strickland
 */

#include <iostream>
#include <string>
#include <vector>

#define TNAME "NoName"
#define TVAL 0

using namespace std;

// class to store name and value
class Name_value {
    public:
        string name;
        int value;
};

// rework exercise 19 to use the Name_value class.
int main() {
    vector<Name_value> nameValueList;
    string input;
    // while loop to continue adding names
    while (1) {
        string name;
        int value;
        Name_value input;

        cout << "Please enter a name: ";
        cin >> name;
        cout << "Please enter a value: ";
        cin >> value;

        // check for exit.
        if (name == TNAME && value == TVAL)
            break;
        // define class and add to vector
        input.name = name;
        input.value = value;
        nameValueList.push_back(input);
    }

    // output name and value pairs
    for (int i = 0; i < nameValueList.size(); i++)
        cout << nameValueList[i].name << " " << nameValueList[i].value << endl;

    return 0;
}