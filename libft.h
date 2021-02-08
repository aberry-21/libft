/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberry <aberry@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 17:56:04 by aberry            #+#    #+#             */
/*   Updated: 2021/02/08 20:58:07 by aberry           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define MAX 922337203685477580
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <sys/types.h>
# include <sys/uio.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char				**ft_clear(char **tab);

void				*ft_memset(void *destination, int c, size_t n);

void				ft_bzero(void *destination, size_t n);

void				*ft_memcpy(void *destination, const void *source, size_t n);

size_t				ft_strlen(const char *str);

void				*ft_memccpy(void *destination, const void *source,
int c, size_t n);

void				*ft_memmove(void *destination, const void *source,
size_t n);

void				*ft_memchr(const void *s, int c, size_t n);

int					ft_memcmp(const void *arr1, const void *arr2, size_t n);

size_t				ft_strlcpy(char *dst, const char *src, size_t size);

size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);

char				*ft_strchr(const char *str, int ch);

char				*ft_strrchr(const char *str, int ch);

char				*ft_strnstr(const char	*big, const char *little,
size_t len);

int					ft_strncmp(const char *str1, const char *str2, size_t n);

int					ft_isalpha(int c);

int					ft_isdigit(int c);

int					ft_isalnum(int c);

int					ft_isascii(int c);

int					ft_isprint(int c);

int					ft_tolower(int c);

int					ft_toupper(int c);

void				*ft_calloc(size_t num, size_t size);

char				*ft_strdup(const char *str);

char				*ft_substr(char const *s, unsigned int start, size_t len);

char				*ft_strjoin(char const *s1, char const *s2);

char				*ft_strtrim(char const *s1, char const *set);

char				**ft_split(char const *s, char c);

char				*ft_itoa_base(int n, char *alpha, int base);

char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void				ft_putchar_fd(char c, int fd);

void				ft_putstr_fd(char *s, int fd);

void				ft_putendl_fd(char *s, int fd);

void				ft_putnbr_fd(int n, int fd);

int					ft_atoi(const char *str);

t_list				*ft_lstnew(void *content);

void				ft_lstadd_front(t_list **lst, t_list *new);

int					ft_lstsize(t_list *lst);

t_list				*ft_lstlast(t_list *lst);

void				ft_lstadd_back(t_list **lst, t_list *new);

void				ft_lstdelone(t_list *lst, void (*del)(void	*));

void				ft_lstclear(t_list **lst, void (*del)(void *));

void				ft_lstiter(t_list *lst, void (*f)(void *));

t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));

#endif
