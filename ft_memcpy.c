/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:32:36 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:33:22 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*pointeur_dest;
	unsigned char	*pointeur_src;

	pointeur_dest = (unsigned char *)dest;
	pointeur_src = (unsigned char *)src;
	while (n > 0)
	{
		*pointeur_dest++ = *pointeur_src++;
		n--;
	}
	return (dest);
}
