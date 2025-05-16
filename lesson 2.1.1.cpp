#include <iostream>
#include <fstream>

using namespace std;

int main()
{
fstream file("m.txt",ios::out|ios::binary);
int arr[5]={1,2,3,4,5};

    if (!file) {
        cerr << "Dosya açılamadı!" << endl;
        return 1;
    }
for(int i=0;i<5;i++){

    file.write((char *)&arr[i],sizeof(int));
}
file.close();

file.open("m.txt",ios::in|ios::binary);
    if (!file) {
        cerr << "Dosya açılamadı!" << endl;
        return 1;
    }
for(int i=0;i<5;i++){
        file.read((char*)&arr[i],sizeof(int));
cout<<arr[i];

}
file.close();
    return 0;
}
