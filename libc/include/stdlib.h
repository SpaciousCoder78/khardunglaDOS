/*
* File Name: stdlib.h
* Author: Aryan Karamtoth
* Created Date: 26 Feb 2025
* Last Modified: 26 Feb 2025
* License: GNU GPL 3.0
*/

#ifndef _STDLIB_H
#define _STDLIB_H 1

#include <sys/cdefs.h>

#ifdef _cplusplus
extern "C"{
    #endif

    __attribute__((__noreturn__))
    void abort(void);

    #ifdef _cplusplus
}

#endif

#endif