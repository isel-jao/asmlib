#ifndef LIB_H
#define LIB_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#define FALSE 0
#define TRUE 1

typedef struct s_list
{
	void *data;
	struct s_list *next;
} t_list;


char *ft_strdup(const char *s);
char *ft_strcpy(char *dest, const char *src);
ssize_t ft_write(int fd, const void *buf, size_t count);
ssize_t read(int fd, void *buf, size_t count);
size_t ft_strlen(const char *s);
int ft_strcmp(const char *s1, const char *s2);
int ft_list_size(t_list *head);
void	ft_list_push_front(t_list **begin_list, void *data);


#endif