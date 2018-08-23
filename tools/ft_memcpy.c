/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 21:56:56 by jochang           #+#    #+#             */
/*   Updated: 2018/08/12 21:36:15 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	if (n <= 0 || dst == src)
		return (dst);
	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (--n)
		*s1++ = *s2++;
	*s1 = *s2;
	return (dst);
}
