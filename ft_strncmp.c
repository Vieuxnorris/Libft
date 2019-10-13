/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:01:40 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 16:02:09 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (*str1 != '\0' && *str2 != '\0'))
	{
		if (*(str1 + i) == *(str2 + i))
		{
			i++;
		}
		else
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	}
	return (0);
}
