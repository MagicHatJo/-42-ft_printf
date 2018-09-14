/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pt_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jochang <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:51:56 by jochang           #+#    #+#             */
/*   Updated: 2018/08/12 15:35:36 by jochang          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

char	*pt_strndup(const char *src, size_t len)
{
	char	*str;

	NULL_CHECK(!(str = (char*)malloc(len + 1)));
	str = pt_strncpy(str, src, len);
	str[len] = '\0';
	return (str);
}
