/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:08:39 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 18:08:42 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char *p1;
	unsigned char *p2;
	
	p1 = (unsigned char *)pointer1;
	p2 = (unsigned char *)pointer2;
	while (size > 0)
    {
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		size--;
    }
	return (0);
}