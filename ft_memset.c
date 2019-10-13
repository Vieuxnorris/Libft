/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:39:46 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:43:33 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*pointeur;

	pointeur = (unsigned char *)s;
	while (n > 0)
	{
		*pointeur = (unsigned char)c;
		pointeur++;
		n--;
	}
	return (s);
}
