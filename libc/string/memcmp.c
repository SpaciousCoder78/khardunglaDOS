/*
* File Name: memcmp.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

#include <string.h>

int memcmp(const void* aptr, const void* bptr, size_t size){
    //assign two pointer values to variables a and b
    const unsigned char* a = (const unsigned char*) aptr;
    const unsigned char* b = (const unsigned char*) bptr;
    for(size_t i=0;i<size;i++){
        if(a[i]<b[i])
            return -1;
        else if (b[i]<a[i])
            return 1;
    }
    return 0;
}