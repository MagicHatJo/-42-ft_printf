/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 21:41:49 by jochang           #+#    #+#             */
/*   Updated: 2018/04/20 00:45:13 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*dst;

	dst = (unsigned char*)b;
	while (len--)
		dst[len] = c;
	return (b);
}
