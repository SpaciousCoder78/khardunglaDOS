/*
* File Name: memcpy.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/
#include <string.h>

void* memcpy(void* restrict dstptr, const void* restrict srcptr, size_t size){
    //assign pointer values to dst and src
    unsigned char* dst = (unsigned char*) dstptr;
    const unsigned char* src = (const unsigned char*) srcptr;
    for(size_t i=0; i<size;i++)
        dst[i]=src[i];
    return dstptr;
}