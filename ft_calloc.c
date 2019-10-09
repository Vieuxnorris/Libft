/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:40:12 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 18:40:15 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void *ft_calloc(size_t nitems, size_t size)
{
	void *result;
	size_t i;
	
	i = 0;
	if (nitems == 0 || size == 0)
		return (NULL);
	result = malloc(size * nitems);
	while (i <= nitems)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}