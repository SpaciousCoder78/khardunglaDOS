/*
* File Name: strlen.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

//function for string length calculation

#include <string.h>

size_t strlen(const char* str){
    size_t len =0;
    //calculate length
    while(str[len])
        len++;
    //return string length
    return len;
}

