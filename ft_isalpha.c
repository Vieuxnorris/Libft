/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:59:54 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:00:56 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int argument)
{
	if ((argument >= 65 && argument <= 90) ||
			(argument >= 97 && argument <= 122))
		return (1);
	return (0);
}

int main()
{
	char str;

	str = '0';
	printf("%d | %d", isalpha(str), ft_isalpha(str));
	return (0);
}
