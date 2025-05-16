#include <iostream>
#include <fstream>

using namespace std;

int main()
{
char name[50];
ofstream file("kim.txt");
if(file.is_open()){
    file<<"bue.fherlk"<<endl;
    file<<"bakltg.lrmtl";
file.close();
}else{
cerr<<"eror";
return 1;
}


 ifstream inputfile("kim.txt");
 if (inputfile.is_open()) {
    while(!inputfile.eof()){
    inputfile.getline(name,50);
    cout<< name<<endl;;
}
inputfile.close();
 }else{
 cerr<<"hata";
 return 1 ;
 }


    return 0;
}
