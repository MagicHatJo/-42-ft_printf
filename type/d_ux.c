/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   d_ux.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 21:06:08 by jochang           #+#    #+#             */
/*   Updated: 2018/08/22 18:51:54 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

static void		error_check(t_opts opts)
{
	(void)opts;
}

static uint64_t	get_num(uint32_t length, va_list ap)
{
	uint64_t	n;

	n = 0;
	if (length == 0 || length == 104 || length == 208 || length == 108)
		n = va_arg(ap, uint32_t);
	else if (length == 216)
		n = va_arg(ap, uint64_t);
	else if (length == 106)
		n = va_arg(ap, uintmax_t);
	else if (length == 122)
		n = va_arg(ap, size_t);
	return (n);
}

static char		*pound(char *s)
{
	int		len;
	char	*str;

	len = pt_strlen(s);
	NULL_CHECK(!(str = (char*)pt_strnew(len + 2)));
	str[0] = '0';
	str[1] = 'X';
	pt_strncpy(&str[2], s, len);
	free(s);
	return (str);
}

static char		*padding(char *s, int len, t_opts opts)
{
	char	*str;

	NULL_CHECK(!(str = (char*)pt_strnew(opts.width)));
	pt_memset(str, ' ', opts.width);
	if (opts.flags.minus)
		pt_strncpy(str, s, len);
	else
		pt_strncpy(&str[opts.width - len], s, len);
	free(s);
	return (str);
}

int				d_ux(t_opts opts, va_list ap)
{
	uint64_t	n;
	char		*s;
	int			len;

	error_check(opts);
	n = get_num(opts.length, ap);
	s = pt_itoh(n, 1);
	if (opts.flags.pound && n)
		s = pound(s);
	len = pt_strlen(s);
	if (opts.width > (uint32_t)len)
		s = padding(s, len, opts);
	pt_putstr(s);
	len = pt_strlen(s);
	free(s);
	return (len);
}
