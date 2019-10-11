/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 08:34:45 by jwins             #+#    #+#             */
/*   Updated: 2019/10/10 08:34:47 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strcpy(char *dest, const char *src)
{
	size_t len;
	size_t i;
	
	if (!src || !dest)
		return (NULL);
	len = ft_strlen(src);
	i = 0;
	while (i <= len && (*src != '\0' || *dest != '\0'))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}