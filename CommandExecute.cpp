
#include <iostream>
#include <sys/wait.h>
#include  <sys/types.h>
#include <unistd.h>
#include  <stdio.h>
#include <string>

//#include <string.h>
//#include <sys/wait.h>
#include "CommandExecute.hpp"
using namespace std;

CommandExecute::CommandExecute(){}


void CommandExecute::execute(){

    
    string str;
    char *tmp[50];
    
    tmp[0]="sh";
    tmp[1]="-c";
    
    for (int i=0;i<this->commads.size();i++)
    {
        
    char buffer[99];
    str=this->commads[i];
    size_t length=str.copy(buffer, str.size(),0);
    buffer[length]='\0';
    tmp[2]=buffer;
    tmp[3]=NULL;
    
    cout<<"Execution: "<<endl;
        
    
        
        bool sta=true;
        if (status==true)
        {  sta=this->run(tmp);
            //if (sta==false){}}
        }
            if (this->connector[i]==';'){
                this->status=true;
               // cout <<"hi ;"<<endl;
            }
            else if (this->connector[i]=='&'){
                if (sta==true){this->status=true;}
                else{
                    this->status=false;
                }
            
                //cout <<"hi &"<<endl;
            }
            else if (this->connector[i]=='|'){
                if (sta==false){this->status=true;}
                else{
                    this->status=false;
                }
                
               // cout <<"hi |"<<endl;
            }
           // else {
             //   this->status=false;
           // }
       
    }

}




void CommandExecute::parse(std::string p)
{}
bool CommandExecute::run(char **a){
    bool tmp=true;
    pid_t  pid;
    int    status;
    if ((pid = fork()) < 0) {     /* fork a child process           */
        cout<<"* Unable to create fork child process"<<endl;
    }
    
    else if (pid == 0) {
        if (execvp("/bin/sh", a) < 0) {     /* execute the command  */
            cout<<"* unable to execute commnad"<<endl;
            tmp=false;
        }
    }
    else {                                  /* for the parent:      */
        while (wait(&status) != pid);
    }
    return tmp;
}

void CommandExecute::p(){
    std::cout<<"contents of vector 1 then 2"<<std::endl;
for (int i=0;i<this->commads.size();i++ )
{
    std::cout<<this->commads[i]<<std::endl;
    
    std::cout<<"conector "<<this->connector[i]<<std::endl;
}}
