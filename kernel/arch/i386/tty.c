/*
* File Name: tty.c
* Author: Aryan Karamtoth
* Created Date: 26 Feb 2025
* Last Modified: 26 Feb 2025
* License: GNU GPL 3.0
*/

//basically making the terminal work

//header dump
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>

//including tty headers
#include <kernel/tty.h>

#include "vga.h"

//define vga properties

//vga width
static const size_t VGA_WIDTH = 80;
//vga height
static const size_t VGA_HEIGHT = 25;
//vga memory
static uint16_t* const VGA_MEMORY = (uint16_t*) 0xB8000;

//define terminal properties

//terminal row
static size_t terminal_row;
//terminal column
static size_t terminal_column;
//terminal colour
static uint8_t terminal_color;
//terminal buffer
static uint16_t* terminal_buffer;

//actually telling OS what happens when terminal turns on

void terminal_initialize(void){
    terminal_row = 0;
    terminal_column = 0;
    terminal_color = vga_entry_color(VGA_COLOR_LIGHT_GREY,VGA_COLOR_BLACK);
    terminal_buffer = VGA_MEMORY;
    //create terminal buffer
    for(size_t y=0;y<VGA_HEIGHT;y++){
        for(size_t x=0;x<VGA_WIDTH;x++){
            const size_t index = y*VGA_WIDTH+x;
            terminal_buffer[index]=vga_entry(' ',terminal_color);
        }
    }
}

//set terminal color
void terminal_setcolor(uint8_t color){
    terminal_color = color;
}

//some function
void terminal_putentryat(unsigned char c,uint8_t color,size_t x,size_t y){
    const size_t index=y*VGA_WIDTH+x;
    terminal_buffer[index]=vga_entry(c,color);
}

//implementing terminal scroll
void terminal_scroll(int line){
    int loop;
    char c;

    //scrolling time
    for(loop=line*(VGA_WIDTH*2)+0xB8000;loop<VGA_WIDTH*2;loop++){
        c=*loop;
        *(loop-(VGA_WIDTH*2))=c;
    }
}

//delete last line
void terminal_delete_last_line(){
    int x,*ptr;
    
    //delete last line
    for(x=0;x<VGA_WIDTH*2;x++){
        ptr=0xB8000 + (VGA_WIDTH *2)*(VGA_HEIGHT-1)+x;
        *ptr=0;
    }
}

//putchar to terminal

void terminal_putchar(char c){
    int line;
    unsigned char uc=c;

    terminal_putentryat(uc,terminal_color,terminal_column,terminal_row);
    if(++terminal_column==VGA_WIDTH){
        terminal_column=0;
        if(++terminal_row==VGA_HEIGHT){
            for(line = 1;line <= VGA_HEIGHT-1;line++){
                terminal_scroll(line);
            }
            //delete last line
            terminal_delete_last_line();
            //deprecate a terminal row
            terminal_row = VGA_HEIGHT - 1;
        }
    }
}

//write data to terminal

void terminal_write(const char* data, size_t size){
    for(size_t i =0;i<size;i++){
        terminal_putchar(data[i]);
    }
}

//write string to terminal

void terminal_writestring(const char* data){
    terminal_write(data,strlen(data));
}