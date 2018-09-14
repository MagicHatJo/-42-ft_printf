/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/24 00:10:11 by jochang           #+#    #+#             */
/*   Updated: 2018/08/15 14:27:22 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*pt_strrev(char *str)
{
	int		i;
	int		k;

	i = -1;
	k = pt_strlen(str);
	while (++i < --k)
	{
		str[i] ^= str[k];
		str[k] ^= str[i];
		str[i] ^= str[k];
	}
	return (str);
}
