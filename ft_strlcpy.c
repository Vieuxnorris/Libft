/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:05:04 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 19:05:06 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	int i;
	
	i = 0;
	while ((*src != '\0') && size > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}