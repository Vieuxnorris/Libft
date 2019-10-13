/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:38:01 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 14:47:27 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int result;
	long long int neg;

	neg = 1;
	result = 0;
	while (*str == 32 || *str == 10 || *str == 9 || *str == 12 ||
			*str == 13 || *str == 11)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = -1;
		str++;
	}
	while (*str != '\0')
	{
		if (*str < 48 || *str > 57)
			return (result * neg);
		else
			result = (result * 10) + (long long int)(*str - '0');
		str++;
	}
	return (result * neg);
}
