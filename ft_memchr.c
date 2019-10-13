/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:22:32 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:30:13 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *destination, int searchedchar, size_t size)
{
	unsigned char	*pointeur_destination;
	unsigned int	i;

	i = 0;
	pointeur_destination = (unsigned char *)destination;
	while (i < size)
	{
		if (*pointeur_destination == searchedchar)
			return (pointeur_destination);
		pointeur_destination++;
		i++;
	}
	return (0);
}
