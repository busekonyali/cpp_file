#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   ifstream file("my.txt");
   if(file.is_open()){
        
   }else{
   cerr<<"fine not open";
   return 1;
   }
 
//------------------------------

   ifstream file("my.txt");
   if(file.fail()){
    cout<<"fine not open";
    exit(1);
   }else{
     
   }
 //------------------------------
 
 
 fstream file"my.txt");

if (!file) {
    cout << "File could not be opened!" << endl;
} else {
    cout << "File opened successfully!" << endl;
}

 
 
    return 0;
}
