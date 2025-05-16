//dosya adını kullanıcıdan alıyoruz fakat uzantısında sıkıntı yaşanabilir
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   fstream file;
   char nameOfFile[20];
   cout<<"enter file name";
   cin.getline(nameOfFile,20);



   file.open(nameOfFile,ios::out);
   if (!file) {
    cout << "File could not be opened!";
    return 1;
}

   cout<<"The file"<<nameOfFile<<"was open";
   system("pause");

  file.close();


    return 0;
}
