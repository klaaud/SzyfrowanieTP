#ifndef COMMONFUNCTIONS_H_INCLUDED
#define COMMONFUNCTIONS_H_INCLUDED

#include <string>

int string_to_array2_len(std::string str);
void array2_to_ascii(int *ascii_tab, std::string str, int len);

void ascii_tab_to_str(std::string * str_tab,int * ascii_tab, int len);

std::string array_to_string(std::string * str_arr, int len);



#endif // COMMONFUNCTIONS_H_INCLUDED
