#include <iostream>
#include <string>
#include "Encryption.h"
#include "Decryption.h"
using namespace std;

void UI()
{
    string init_text;
    int n;

    cout<<"Podaj tekst ktory chcesz zaszyfrowac: "<<endl;
    getline(cin,init_text);
    cout<<endl;
    cout<<"Podaj przesuniecie :"<<endl;
    cin>>n;
    string encrypted=Encryption(init_text,n);

    cout<<"Podaj text do odszyfrowania ";
    string init_text2;
    getline(cin,init_text2);
    cout<<"-------------"<<endl;
    Decryption(encrypted,n);
}
