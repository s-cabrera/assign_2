#ifndef CommandExecute_hpp
#define CommandExecute_hpp

#include <iostream>
#include <vector>
#include <iostream>


class CommandExecute{
public:
    CommandExecute();
    void execute();
    virtual void parse(std::string p);
    virtual void p();
protected:
     bool run(char **a);
    std::vector <std::string> commads;
    std::vector <char> connector;
    bool status=true;
};


#endif /* CommandExecute_hpp */
