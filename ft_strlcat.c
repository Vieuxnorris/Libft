/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:55:48 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:56:29 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	s1_end;

	i = 0;
	while (dest[i] && i < size)
		i++;
	s1_end = i;
	while (src[i - s1_end] && i < size - 1)
	{
		dest[i] = src[i - s1_end];
		i++;
	}
	if (s1_end < size)
		dest[i] = '\0';
	return (s1_end + ft_strlen(src));
}
