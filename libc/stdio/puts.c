/*
* File Name: puts.c
* Author: Aryan Karamtoth
* Created Date: 27 Feb 2025
* Last Modified: 27 Feb 2025
* License: GNU GPL 3.0
*/

#include <stdio.h>

int puts(const char* string){
    return printf("%s\n",string);
}