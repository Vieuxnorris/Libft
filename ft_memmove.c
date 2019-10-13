/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:34:11 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:39:35 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t length)
{
	unsigned char	*pointeur_dst;
	unsigned char	*pointeur_src;
	size_t			i;

	i = 0;
	pointeur_dst = (unsigned char *)dst;
	pointeur_src = (unsigned char *)src;
	if (pointeur_src < pointeur_dst)
	{
		while ((int)length > 0)
		{
			*(pointeur_dst + i) = *(pointeur_src + i);
			length--;
			i++;
		}
	}
	else
		while ((int)length > 0)
		{
			*(pointeur_dst + i) = *(pointeur_src + i);
			length--;
			i++;
		}
	return (dst);
}
