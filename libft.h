#ifndef LIBFT_H
#define LIBFT_H

#define TRUE (1 == 1)
#define FALSE !TRUE
#define BETWEEN(value, min, max) ((value) >= (min) && (value) <= (max))
#define CHECK_MEMOP(dst, src, n) ((dst) && (src) && (n) > 0)
#define OVERLAPCHK(dst, src, len)                \
    (((dst) < (src) && (dst) + (len) > (src)) || \
     ((src) < (dst) && (src) + (len) > (dst)))
#include <stddef.h>

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t strlcat(char *dst, const char *src, size_t dstsize);

#endif