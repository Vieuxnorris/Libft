/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:21:45 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:22:16 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t cnt)
{
	unsigned char *p1;
	unsigned char *p2;
	size_t count;

	if (src == NULL || dest == NULL)
		return (NULL);
	p1 = (unsigned char *)dest;
	p2 = (unsigned char *)src;
	count = 0;
	while (count < cnt)
	{
		p1[count] = p2[count];
		if (p2[count] == c)
			return ((char *)dest + count + 1);
		count++;
	}
	return (NULL);
}
