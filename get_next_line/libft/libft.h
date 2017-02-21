/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biasinov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 20:31:14 by biasinov          #+#    #+#             */
/*   Updated: 2017/01/19 17:05:25 by biasinov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>

typedef	unsigned char		t_byte;

typedef	struct				s_list
{
	void					*content;
	size_t					content_size;
	struct s_list			*next;
}							t_list;

void						ft_putchar(char c);
void						ft_putchar_fd(char c, int fd);
void						ft_putnbr_fd(int n, int fd);
void						ft_putnbr(int n);
void						ft_putstr_fd(char const *s, int fd);
void						ft_putstr(char const *s);
void						ft_putstrsplit(char const *s, char c);
void						ft_putendl_fd(char const *s, int fd);
void						ft_putendl(char const *s);

size_t						ft_strlen(char const *s);
size_t						ft_strlcat(char *dest, char const *src,
	size_t size);
int							ft_strcmp(char const *s1, char const *s2);
int							ft_strncmp(char const *s1, char const *s2,
	size_t n);
int							ft_strequ(char const *s1, char const *s2);
int							ft_strnequ(char const *s1, char const *s2,
	size_t n);

int							ft_isalpha(int c);
int							ft_isdigit(int c);
int							ft_isalnum(int c);
int							ft_isascii(int c);
int							ft_iscntrl(int c);
int							ft_isprint(int c);
int							ft_toupper(int c);
int							ft_tolower(int c);

void						ft_strdel(char **as);
void						ft_strclr(char *s);
void						ft_striter(char *s, void (*f)(char *));
void						ft_striteri(char *s, void (*f)(unsigned int,
	char *));

char						*ft_strnew(size_t size);
char						*ft_strmap(char const *s, char(*f)(char));
char						*ft_strmapi(char const *s, char(*f)(unsigned int,
	char));
char						*ft_strsub(char const *s, unsigned int start,
	size_t len);
char						*ft_strcpy(char *dest, char const *src);
char						*ft_strncpy(char *dest, const char *src, size_t n);
char						*ft_strdup(char const *s);
char						*ft_strndup(char const *s, size_t n);
char						*ft_stralloc(char const *s);
char						*ft_strcat(char	*dest, char const *src);
char						*ft_strncat(char *dest, char const *src, size_t n);
char						*ft_strchr(char const *s, int c);
char						*ft_strrchr(char const *s, int c);
char						*ft_strstr(const char *haystack,
	const char *needle);
char						*ft_strnstr(const char *haystack,
	const char *needle, size_t len);
char						*ft_strjoin(char const *s1, char const *s2);

void						*ft_memset(void *s, int c, size_t n);
void						*ft_memalloc(size_t size);
void						ft_memdel(void **ap);

void						*ft_memcpy(void *dest, const void *src, size_t n);
void						*ft_memccpy(void *restrict dst,
	const void *restrict src, int c, size_t n);
void						*ft_memmove(void *dest, const void *src, size_t n);
void						*ft_memchr(const void *s, int c, size_t n);
int							ft_memcmp(const void *s1, const void *s2,
	size_t n);

void						ft_bzero(void *s, size_t n);
int							ft_firstwordsize(char const *s, char c);
int							ft_countwords(char const *s, char c);
char						*ft_strtrim(char const *s);

char						**ft_strsplit(char const *s, char c);
char						*ft_itoa(int n);
int							ft_atoi(const char *nptr);
int							ft_numsize(int n);
int							ft_abs(int n);
int							ft_min(int arr[], int n);
int							ft_max(int arr[], int n);

t_list						*ft_lstnew(void const *content,
	size_t content_size);
void						ft_lstdelone(t_list **alst,
	void (*del)(void *, size_t));
void						ft_lstdel(t_list **alst,
	void (*del)(void *, size_t));
void						ft_lstadd(t_list **alst, t_list *new);
void						ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list						*ft_lstmap(t_list *lst,
	t_list *(*f)(t_list *elem));

#endif
