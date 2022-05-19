#include <iostream>
#include <string>
#include "CommonFunctions.h"
using namespace std;


void ascii_tab_add_shift(int * tab, int len, int shift){


    for(int i=0;i<len;i++){
        if(tab[i]>=65 && tab[i]<=90) {
            if((tab[i]+shift)<=90){
                int x=tab[i]+shift;
                tab[i]=x;
            }
            else{
                int diff=(tab[i]+shift)-90;
                int x=65+diff-1;
                tab[i]=x;
            }
        }
        else if(tab[i]>=97 && tab[i]<=122) {
            if((tab[i]+shift)<=122){
                int x=tab[i]+shift;
                tab[i]=x;
            }
            else{
                int diff=(tab[i]+shift)-122;
                int x=97+diff-1;
                tab[i]=x;
            }
        }
    }

}

string Encryption (string str, int shift){

    int str_len=string_to_array2_len(str);
    int *tab=new int [str_len];
    array2_to_ascii(tab,str,str_len);
    cout<<endl;
    ascii_tab_add_shift(tab,str_len,shift);
    string * shifted_str=new string[str_len];
    ascii_tab_to_str(shifted_str,tab,str_len);
    string out=array_to_string(shifted_str,str_len);
    return out;
}
