#include <iostream>
#include <fstream>

using namespace std;

int main()
{
   ofstream file("my.txt",ios::out);
   if(file.is_open()){
    file<<"myyy lifee"<<endl;
   file<<"lalala"<<endl;
   file.close();

   file.open("my.txt",ios::app);//append mod veri eklemek için kullanılır okuma yapmaz!!
    file<<"like a ";
    file<<"song";
    file.close();
   }else{
   cerr<<"fine not open";
   return 1;
   }



    return 0;
}
