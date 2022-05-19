#include <iostream>
#include <string>
#include "CommonFunctions.h"
using namespace std;




void ascii_tab_substr_shift2(int * tab, int len, int shift){


    for(int i=0;i<len;i++){
        if(tab[i]>=65 && tab[i]<=90) {
            if((tab[i]-shift)>=65){
                int x=tab[i]-shift;
                tab[i]=x;
            }
            else{
                int diff=abs((tab[i]-shift)-65);
                int x=90-diff+1;
                tab[i]=x;
            }
        }
        else if(tab[i]>=97 && tab[i]<=122) {
            if((tab[i]-shift)>=97){
                cout<<"---------"<<endl;
                cout<<tab[i]<<endl;
                int x=tab[i]-shift;
                tab[i]=x;
                cout<<tab[i]<<endl;
            cout<<"---------"<<endl;
            }
            else{
                cout<<"---------"<<endl;
                cout<<tab[i]<<endl;
                int diff=abs((tab[i]-shift)-97);
                int x=122-diff+1;
                tab[i]=x;
                cout<<tab[i]<<endl;
                cout<<"---------"<<endl;
            }
        }
    }

}




void Decryption (string str, int shift){

    int str_len=string_to_array2_len(str);
    int *tab=new int [str_len];
    array2_to_ascii(tab,str,str_len);
    cout<<endl;
    ascii_tab_substr_shift2(tab,str_len,shift);
    string * shifted_str=new string[str_len];
    ascii_tab_to_str(shifted_str,tab,str_len);
    array_to_string(shifted_str,str_len);

}
