#include <iostream>
#include "GetInput.hpp"
#include <unistd.h>
#include  <stdio.h>
#include  <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include "Command.hpp"


using namespace std;


int main() {
 

    cout<<"$ ";
    GetInput test;
    test.getData();
    cout<<test.retrieveData()<<endl;
    
    CommandExecute *instance=new Command;
    instance->parse(test.retrieveData());
  //  instance->p();
    cout<<endl;
    instance->execute();
    
    cout<<endl;
 
}
