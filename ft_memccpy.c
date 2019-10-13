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
	while (cnt > 0)
	{
		*(unsigned char *)dest++ = *(unsigned char *)src;
		if (*(unsigned char *)src++ == (unsigned char)c)
			return (dest);
		cnt--;
	}
	return (NULL);
}
