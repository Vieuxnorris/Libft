/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strrchr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:43:43 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 11:43:46 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *last_position;
	
	last_position = (0);
	while (*str != '\0')
	{
		if (*str == c)
			last_position = (char *)str;
		str++;
	}
	if (last_position)
		return (last_position);
	if (c == '\0')
		return ((char *)str);
	return (0);
}