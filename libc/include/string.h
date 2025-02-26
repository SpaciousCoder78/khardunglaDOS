/*
* File Name: string.h
* Author: Aryan Karamtoth
* Created Date: 26 Feb 2025
* Last Modified: 26 Feb 2025
* License: GNU GPL 3.0
*/

//string standtard library

#ifndef _STRING_H
#define _STRING_H 1

#include <sys/cdefs.h>

#include <stddef.h>

#ifdef _cplusplus
extern "C"{
    #endif

    //memory functions
    int memcmp(const void*,const void*,size_t);
    void* memcpy(void* _restrict,const void* _restrict,size_t);
    void *memmove(void*,const void*,size_t);
    void* memset(void*,int,size_t);

    #ifdef _cplusplus
}
#endif

#endif