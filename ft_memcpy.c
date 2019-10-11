/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:23:52 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 17:23:54 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *pointeur_dest;
	unsigned char *pointeur_src;
	
	pointeur_dest = (unsigned char *)dest;
	pointeur_src = (unsigned char *)src;
	while (n > 0)
	{
		*pointeur_dest++ = *pointeur_src++;
		n--;
	}
	return (dest);
}