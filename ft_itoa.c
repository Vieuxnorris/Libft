/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 15:09:31 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 15:15:44 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_digitlen(long nombre)
{
	size_t	size;

	if (nombre == 0)
		return (nombre + 1);
	size = 0;
	if (nombre < 0)
	{
		nombre = -nombre;
		size++;
	}
	while (nombre != 0)
	{
		nombre /= 10;
		size++;
	}
	return (size);
}

static int	ft_sign(int n)
{
	if (n < 0)
		return (1);
	return (0);
}

char		*ft_itoa(int n)
{
	long	long_n;
	long	longueur;
	char	*fresh;

	long_n = n;
	longueur = ft_digitlen(long_n);
	if (longueur == 0)
		longueur = 1;
	fresh = (char *)malloc((longueur + 1) * sizeof(char));
	if (!fresh)
		return (NULL);
	fresh[longueur] = '\0';
	longueur--;
	if (long_n < 0)
		long_n = -long_n;
	while (longueur >= 0)
	{
		fresh[longueur] = (long_n % 10) + '0';
		longueur--;
		long_n /= 10;
	}
	if (ft_sign(n))
		fresh[0] = '-';
	return (fresh);
}
