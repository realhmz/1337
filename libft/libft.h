#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>

size_t ft_strlen(const char *s);
int ft_tolower(int c);
int ft_toupper(int c);
int ft_isprint(int c);
int ft_atoi(const char *nptr);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
char *ft_strdup(const char *s);
int ft_strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
#endif