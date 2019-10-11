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
	while (size > 0)
    {
		if (*pointer1 != *pointer2)
			return (*pointer1 - *pointer2);
		*pointer1++;
		*pointer2++;
		size--;
    }
	return (0);
}