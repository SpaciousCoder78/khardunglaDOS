/*
* File Name: putchar.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

#include <stdio.h>

#if defined(__is_libk)
#include <kernel/tty.h>
#endif

int putchar(int ic){
#if defined(__is_libk)
    char c = (char) ic;
    terminal_write(&c,sizeof(c));
#else
    //TODO: implement stdio and write sys calls

#endif
    return ic;
}