#ifndef _MAIN_H
#define _MAIN_H

#include <unistd.h> /*read() & close()*/
#include <sys/types.h> /*open()*/
#include <sys/stat.h> /*open()*/
#include <fcntl.h> /*open()*/
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
