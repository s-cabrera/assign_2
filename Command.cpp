//#include <vector>
//#include <iostream>

#include "Command.hpp"


using namespace std;

void Command::parse(std::string a){
    string::iterator it;
    int i = 0;
    string tmp;
    for ( it = a.begin() ; it < a.end(); it++,i++)
    {tmp=tmp+a[i];
        
           if (a[i]==38||a[i]==59||a[i]==124)
               {
                
                   this->connector.push_back(a[i]);
                 tmp.erase((tmp.size()-1),1);
          
               
               for (int j=0; j<tmp.size();j++)  //in separete func coud also erase spaces infront
                {
                    if (tmp[0]==32)
                    {
                        tmp.erase(0,1);}}
              
               
                this->commads.push_back(tmp);
               
               
                tmp.clear();
               
            if (a[i]!=59){ i++;}
               
           }
       else if (it==(a.end()-1))    /// gets lats comanf no separstor
         //  else if (a[i]==NULL)
        { this->commads.push_back(tmp);
            
        }

       }
    }
void Command::p(){        //remove right
    cout<<"contents of vector 1 then 2"<<endl;
    for (int i=0;i<this->commads.size();i++ )
    {
        cout<<this->commads[i]<<endl;
        
        cout<<"conector "<<this->connector[i]<<endl;
    }}







