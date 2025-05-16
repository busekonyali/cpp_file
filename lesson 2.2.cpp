#include <iostream>
#include <fstream>
using namespace std;
void fileopen(string& name);
int main()
{ string my="name.txt";
    fileopen(my);


    return 0;
}

void fileopen(string& name){
 fstream filee(name,ios::out);
 if(filee.is_open()){

    cout<<"basari";
    filee.close();
 }else{
 cerr<<"hata";

 }

}

