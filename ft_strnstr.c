/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:08:28 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 19:08:30 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	
	if (*little == '\0')
		return ((char *)big);
	i = ft_strlen(little);
	while (*big != '\0' && len >= i)
	{
		if (*big == *little && (ft_memcmp(big, little, i) == 0))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}