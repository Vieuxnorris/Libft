/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 15:47:30 by jwins             #+#    #+#             */
/*   Updated: 2020/02/12 15:49:20 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlast(char const *str, char const *last)
{
	int		len;
	int		l_len;

	len = ft_strlen(str);
	l_len = ft_strlen(last);
	if (l_len > len)
		return (0);
	return (!ft_strcmp(str + len - l_len, last));
}
