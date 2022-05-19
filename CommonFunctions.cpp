#include <iostream>
#include <string>

using namespace std;



int string_to_array2_len(string str)
{
    int len=str.length();
    return len;
}

void array2_to_ascii(int *ascii_tab, string str, int len){


    for(int i=0;i<len;i++){
        char x=str.at(i);
        ascii_tab[i]=int(x);
    }

}



void ascii_tab_to_str(string * str_tab,int * ascii_tab, int len){

    for(int i=0;i<len;i++){
        char x=char(ascii_tab[i]);
        str_tab[i]=x;
    }



}

string array_to_string(string * str_arr, int len){
    string output="";

    for(int i=0;i<len;i++){
        string temp=str_arr[i];
        output=output+temp;
    }
    cout<<output<<endl;
    return output;
}

