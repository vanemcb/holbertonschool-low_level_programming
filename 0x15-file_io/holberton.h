#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
size_t read_textfile(const char *filename, size_t letters);
#endif
