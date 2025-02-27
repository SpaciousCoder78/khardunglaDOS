/*
* File Name: memset.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

#include <string.h>

void* memset(void* bufptr,int value, size_t size){
    unsigned char* buf = (unsigned char*) bufptr;
    for(size_t i = 0;i<size;i++)
        buf[i]=(unsigned char) value;
    return bufptr;
}