/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 14:27:35 by jochang           #+#    #+#             */
/*   Updated: 2018/08/22 14:39:27 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_itoo(uint64_t n)
{
	int		i;
	char	*s;
	char	*oct;

	NULL_CHECK(!(s = (char*)ft_strnew(12)));
	oct = "01234567";
	i = (n == 0 ? 1 : 0);
	if (n == 0)
		s[0] = '0';
	while (n)
	{
		s[i] = oct[n & 7];
		n >>= 3;
		i++;
	}
	s[i] = '\0';
	ft_strrev(s);
	return (s);
}