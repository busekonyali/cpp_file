#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
   fstream file;
   float num=12.4568;
   file.open("my.txt",ios::out);//ios::out dosyaya yazma için
   if(file.fail()){
        cout<<"file mistake";
        return 1;

   }
    file<<num<<endl;
    file<<setprecision(5)<<num<<endl;

    file<<setprecision(3)<<num<<endl;

    file<<setprecision(2)<<num<<endl;



    return 0;
}
