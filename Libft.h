#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

int ft_atoi(const char *str);
void ft_bzero(void *str, size_t size);
void *ft_calloc(size_t nitems, size_t size);
int ft_isalnum(int character);
int ft_isalpha(int argument);
int ft_isascii(int c);
int ft_isdigit(int arg);
int ft_isprint(int character);
void *ft_memccpy(void *dest, const void *src, int c, size_t cnt);
void *ft_memchr(const void *destination, int searchedChar, size_t size);
int ft_memcmp(const void *pointer1, const void *pointer2, size_t size);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t length);
void *ft_memset(void *s, int c, size_t n);
char *ft_strchr(const char *string, int searchedChar);
char *ft_strdup(const char *str);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlcpy(char *dest, const char *src, size_t size);
int ft_strlen(const char *str);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr(const char *big, const char *little, size_t len);
char *ft_strrchr(const char *str, int c);
int ft_tolower(int c);
int ft_toupper(int c);
char *ft_strcpy(char *dest, const char *src);

#endif