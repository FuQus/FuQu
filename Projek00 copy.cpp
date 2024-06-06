#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <string>

using namespace std;

void dmenu(){
system("cls");
cout<<"Aplikasi Tempat Menu!"<<"\n";
cout<<"1.Menu pertama!"<<"\n";
cout<<"2.Menu kedua"<<"\n";
cout<<"3.Menu ketiga"<<"\n";
cout<<"4.Menu keempat"<<"\n";
cout<<"5.exit"<<"\n";
cout<<"masukkan angka :";
}

void mPertama(){
    system("cls");
 cout<<"hallo saya menu pertama!!";
 getch ();
}

int main (){
char pl;
do{
    dmenu();
    pl = getch ();

switch (pl)
{
    case '1':
    mPertama();
    break;

    case '5':
    break;

    default:
    system("cls");
    cout<<"pilihan tidak tersedia!";
    getch ();
    break;
}
} while (pl !='5');
return 0;
}
