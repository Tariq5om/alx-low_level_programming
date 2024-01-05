#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
unsigned int _strlen(const char *s);
ssize_t read_textfile(const char *filename, size_t letters);
void *_calloc(unsigned int nmemb, unsigned int size);
int create_file(const char *filename, char *text_content);
void eclose(int *fd);
#define inf (O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR)
#define len (_strlen(text_content) + 1)
#define inf2 (O_WRONLY | O_CREAT | O_TRUNC, 0664)
#endif /*end if*/
