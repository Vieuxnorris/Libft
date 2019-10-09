/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 17:49:03 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 17:49:05 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

void *ft_memchr(const void *destination, int searchedChar, size_t size)
{
	unsigned char *pointeur_destination;
	unsigned int i;
	
	i = 0;
	pointeur_destination = (unsigned char *)destination;
	while (i < size)
	{
		if (*pointeur_destination == searchedChar)
			return (pointeur_destination);
		pointeur_destination++;
		i++;
	}
	return (0);
}