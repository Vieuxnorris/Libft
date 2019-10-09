/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 11:16:51 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 11:16:55 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	while (n >= 0)
	{
		if (*str1 > *str2)
			return (*str1 - *str2);
		if (*str1 < *str2)
			return (*str2 - *str1);
		return (*str1 - *str2);
	}
}