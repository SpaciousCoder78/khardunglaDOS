/*
* File Name: memmove.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

#include <string.h>

//move memory fn
void* memmove(void* dstptr, const void* srcptr, size_t size){
    //assign pointer value to destination
    unsigned char* dst = (unsigned char*) dstptr;
    //assign pointer value to source
    const unsigned char* src = (const unsigned char*) srcptr;
    if(dst<src){
        for(size_t i=0;i<size;i++)
            dst[i]=src[i];
    }else{
        for(size_t i = size;i!=0;i--)
            dst[i-1]=src[i-1];
    }
    return dstptr;
}