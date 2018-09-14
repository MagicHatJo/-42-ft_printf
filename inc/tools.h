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

void			pt_putchar(char c);
void			pt_putstr(char const *s);
size_t			pt_strlen(char const *s);
int				pt_atoi(char const *s);
int				pt_isspace(char c);
char			*pt_strndup(const char *src, size_t len);
char			*pt_strncpy(char *dst, const char *src, size_t len);
void			*pt_memalloc(size_t size);
void			pt_bzero(void *str, size_t n);
void			*pt_memset(void *b, int c, size_t len);
size_t			pt_wcslen(wchar_t *s);
void			*pt_memcpy(void *dst, const void *src, size_t n);
char			*pt_itoa(int64_t n);
int				pt_placevalue(int64_t n);
char			*pt_strnew(size_t size);
char			*pt_itoa_abs(int64_t n);
char			*pt_uitoa(uint64_t n);
char			*pt_strrev(char *str);
char			*pt_itoh(uint64_t n, int caps);
int				pt_upval(uint64_t n);
void			pt_putwstr(wchar_t *s);
void			pt_putwchar(wchar_t c);
char			*pt_itoo(uint64_t n);

#endif
