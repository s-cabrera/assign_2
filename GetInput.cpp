
#include <iostream>
#include <string>
#include "GetInput.hpp"

using namespace std;

void GetInput::getData(){
// It gets user input and puts it into the string "in"
    getline(cin,in);
}
string GetInput::retrieveData(){
// It returns "in"
    return in;
}
