/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:07:00 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 16:09:04 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	index;
	char	*copie;

	if (*s == '\0' || len <= 0)
		return (NULL);
	copie = (char *)malloc(len + 1);
	if (copie == NULL)
		return (NULL);
	index = 0;
	while (index < start)
		if (*s != '\0')
			index++;
	if (index != start)
		return (NULL);
	index = 0;
	while (index < len)
	{
		*(copie + index) = *(s + start);
		index++;
		start++;
	}
	copie[index] = '\0';
	return (copie);
}
