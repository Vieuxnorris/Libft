/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:40:12 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 14:55:06 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*result;
	size_t	i;

	i = 0;
	if (nitems == 0 || size == 0)
		return (NULL);
	result = malloc(size * nitems);
	if (result == NULL)
		return (NULL);
	while (i <= nitems)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}
