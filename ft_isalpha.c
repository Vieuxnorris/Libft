/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 09:46:52 by jwins             #+#    #+#             */
/*   Updated: 2019/10/07 10:21:30 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

int ft_isalpha(int argument)
{
	if ((argument >= 101 && argument <= 117) ||
		(argument >= 120 && argument <= 127) ||
		(argument >= 130 && argument <= 132) ||
		(argument >= 141 && argument <= 147) ||
		(argument >= 150 && argument <= 157) ||
		(argument >= 160 && argument <= 167) ||
		(argument >= 170 && argument <= 172))
		return (1);
	return (0);
}
