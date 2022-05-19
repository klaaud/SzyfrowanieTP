#include <iostream>
#include <string>

using namespace std;

int count_spaces(string input, char space){

    int counter=0;
    for(int i=0;i<input.length();i++){
        if(input.at(i)==' '){
            counter=counter+1;
        }

    }


    return counter;

}


void spliited_string(string input){

    int counter=count_spaces(input,' ');
    cout<<counter<<endl;


}
