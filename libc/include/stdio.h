/*
* File Name: stdio.h
* Author: Aryan Karamtoth
* Created Date: 26 Feb 2025
* Last Modified: 26 Feb 2025
* License: GNU GPL 3.0
*/

//stdio lib

#ifndef _STDIO_H
#define _STDIO_H 1

#include <sys/cdefs.h>

//defining end of file 
#define EOF (-1)

#ifdef _cplusplus
extern "C"{
    #endif

    //defining stdio funs
    int printf(const char* _restrict,...);
    int putchar(int);
    int puts(const char*);

    #ifdef _cplusplus
}
#endif

#endif