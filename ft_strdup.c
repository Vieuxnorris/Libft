/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 18:40:12 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 18:40:15 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char *ft_strcpy(char *dest, const char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

char *ft_strdup(const char *str)
{
	int len;
	char *scop;
	
	len = ((ft_strlen(str)) + 1);
	if ((scop = ((char *)malloc(sizeof(char) * len))))
	{
		ft_strcpy(scop, str);
		return (scop);
	}
	return (NULL);
}