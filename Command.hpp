

#ifndef COMMAND_H
#define COMMAND_H
#include <iostream>
#include <vector>
#include "CommandExecute.hpp"
//using namespace std;

class Command: public CommandExecute{
public:
    void parse(std::string p);
    void p();// remove
    
    
private:

};


#endif /* Command_hpp */
