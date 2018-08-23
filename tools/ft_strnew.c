/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 00:42:10 by jochang           #+#    #+#             */
/*   Updated: 2018/08/13 13:41:09 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*ft_strnew(size_t size)
{
	char	*temp;

	NULL_CHECK(!(temp = (char*)malloc(size + 1)));
	temp = ft_memset(temp, '\0', size + 1);
	return (temp);
}
