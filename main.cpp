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
 
   GetInput test;

 do{
    cout<<"$ ";
    test.getData();
    cout<<test.retrieveData()<<endl;
   if(test.retrieveData() == Exit){
      return 0;
   }   
   else{ 
    CommandExecute *instance=new Command;
    instance->parse(test.retrieveData());
  //  instance->p();
    cout<<endl;
    instance->execute();
    
    cout<<endl;
   }
  }while(test.retrieveData() != "Exit");

}
