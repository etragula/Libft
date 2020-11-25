/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: etragula <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:30:38 by etragula          #+#    #+#             */
/*   Updated: 2020/11/17 16:31:46 by etragula         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
int		ft_toupper(int arg);
int		ft_tolower(int arg);
char	*ft_strrchr(const char *str, int ch);
char	*ft_strnstr(const char *big, const char *lit, size_t n);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
int		ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
int		ft_isprint(int arg);
int		ft_isdigit(int arg);
int		ft_isascii(int arg);
int		ft_isalpha(int arg);
int		ft_isalnum(int arg);
void	*ft_memset(void *ptr, int value, size_t num);
void	ft_bzero(void *s, size_t num);
void	*ft_memcpy(void *dst, const void *src, size_t num);
void	*ft_memccpy(void *dst, const void *src, int c, size_t num);
void	*ft_memmove(void *dst, const void *src, size_t num);
char	*ft_strdup(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	**ft_split(const char *s, char c);

#endif
