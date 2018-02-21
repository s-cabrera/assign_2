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

cout<<"Type 'Exit'"<<endl;
    
   GetInput test;

 do{
// It gets user data and continues to do so until the user inputs "Exit"
    cout<<"$ ";
    test.getData();
   if(test.retrieveData() =="Exit"){
      return 0;
   }   
   else{ 
// If the user does not exit, it will parse the data and then execute accordingly
    CommandExecute *instance=new Command;
    instance->parse(test.retrieveData());
    cout<<endl;
    instance->execute();
    
    cout<<endl;
   }
  }while(test.retrieveData() != "Exit");

}
