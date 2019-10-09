/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 19:25:26 by jwins             #+#    #+#             */
/*   Updated: 2019/10/07 19:34:42 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

char *ft_strchr(const char *string, int searchedChar)
{
	char *tmp;

	tmp = (char *)string;
	while (*tmp != searchedChar)
	{
		if (*tmp == '\0')
			return (0);
		tmp++;
	}
	return (tmp);
}