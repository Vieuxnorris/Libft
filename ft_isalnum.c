/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 14:57:06 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 14:59:01 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int character)
{
	if ((character >= 48 && character <= 57) ||
			(character >= 65 && character <= 90) ||
			(character >= 97 && character <= 122))
		return (1);
	return (0);
}
