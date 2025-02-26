/*  Kernel TTY
    Author: Aryan Karamtoth
    Created Date: 26 Feb 2025
    Last Revised: 26 Feb 2025
*/

//macro definitions
#ifndef _KERNEL_TTY_H
#define _KERNEL_TTY_H

#include <stddef.h>

//initalise terminal
void terminal_initialize(void);
//read from terminal
void terminal_putchar(char c);
//write to terminal
void terminal_write(const char* data, size_t size);
//write strings
void terminal_writestring(const char* data);

#endif