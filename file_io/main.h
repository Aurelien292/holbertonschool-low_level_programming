#ifndef MAIN_H
#define MAIN_H
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define BUF_SIZE 1024

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void copy_file(const char *src_file, const char *dest_file);
int open_src_file(const char *src_file);
int open_dest_file(const char *dest_file);
void close_files(int fd_from, int fd_to);
void copy_data(int fd_from, int fd_to, char *file_from, char *file_to);
int open_file(const char *filename, int flags);
#endif
