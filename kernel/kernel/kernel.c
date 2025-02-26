/*
* File Name: kernel.c
* Author: Aryan Karamtoth
* Created Date: 26 Feb 2025
* Last Modified: 26 Feb 2025
* License: GNU GPL 3.0
*/

//header file dump
#include <stdio.h>

//include tty header
#include <kernel/tty.h>

//start terminal
void kernel_main(void) {
	terminal_initialize();
	printf("Hello, Welcome to LiteraDOS!\n");
}



