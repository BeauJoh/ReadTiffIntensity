//
//  io_png.h
//  medialAxisTransform
//
//  Created by Beau Johnston on 11/04/11.
//  Copyright 2011 University Of New England. All rights reserved.
//

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>

#define PNG_DEBUG 3
#include <UnixImageIO/png.h>

typedef unsigned char image_byte;

void abort_(const char * s, ...);
void read_png_file(char* file_name);
void write_png_file(char* file_name);
void process_file(void);