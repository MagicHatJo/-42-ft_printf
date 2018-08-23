/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 23:48:59 by jochang           #+#    #+#             */
/*   Updated: 2018/08/12 14:59:38 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

void	*ft_memalloc(size_t size)
{
	void	*temp;

	temp = (void*)malloc(size);
	NULL_CHECK(!temp);
	ft_bzero(temp, size);
	return (temp);
}
