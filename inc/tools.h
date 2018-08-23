/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 13:04:45 by jochang           #+#    #+#             */
/*   Updated: 2018/08/22 14:30:08 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOOLS_H
# define TOOLS_H

# include <unistd.h>
# include <wchar.h>

void			ft_putchar(char c);
void			ft_putstr(char const *s);
size_t			ft_strlen(char const *s);
int				ft_atoi(char const *s);
int				ft_isspace(char c);
char			*ft_strndup(const char *src, size_t len);
char			*ft_strncpy(char *dst, const char *src, size_t len);
void			*ft_memalloc(size_t size);
void			ft_bzero(void *str, size_t n);
void			*ft_memset(void *b, int c, size_t len);
size_t			ft_wcslen(wchar_t *s);
void			*ft_memcpy(void *dst, const void *src, size_t n);
char			*ft_itoa(int64_t n);
int				ft_placevalue(int64_t n);
char			*ft_strnew(size_t size);
char			*ft_itoa_abs(int64_t n);
char			*ft_uitoa(uint64_t n);
char			*ft_strrev(char *str);
char			*ft_itoh(uint64_t n, int caps);
int				ft_upval(uint64_t n);
void			ft_putwstr(wchar_t *s);
void			ft_putwchar(wchar_t c);
char			*ft_itoo(uint64_t n);

#endif
