/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memccpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:29:58 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 18:30:01 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memccpy(void *dest, const void *src, int c, size_t cnt)
{
	unsigned char *pointeur_dest;
	unsigned char *pointeur_src;
	unsigned int i;
	
	pointeur_dest = (unsigned char *)dest;
	pointeur_src = (unsigned char *)src;
	i = 0;
	while (i < cnt)
	{
		*(pointeur_dest + i) = *(pointeur_src + i);
		if (*(pointeur_dest + i) == c)
			return (pointeur_dest + i);
		i++;
	}
	return (0);
}