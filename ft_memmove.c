/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:44:39 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 18:44:41 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memmove(void *dst, const void *src, size_t length)
{
	char *pointeur_dst;
	char *pointeur_src;
	size_t i;
	
	i = 0;
	pointeur_dst = (unsigned char *)dst;
	pointeur_src = (unsigned char *)src;
	if (pointeur_src < pointeur_dst)
	{
		while ((int)length >= 0)
		{
			*(pointeur_dst + length) = *(pointeur_src + length);
			length--;
		}
	}
	else
	{
		while (i < length)
		{
			*(pointeur_dst + i) = *(pointeur_src + i);
			i++;
		}
	}
	return (dst);
}