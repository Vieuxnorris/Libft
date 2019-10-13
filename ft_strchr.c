/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:50:13 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:51:20 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *string, int searchedchar)
{
	char	*tmp;

	tmp = (char *)string;
	while (*tmp != searchedchar)
	{
		if (*tmp == '\0')
			return (0);
		tmp++;
	}
	return (tmp);
}
