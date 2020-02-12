/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/08 17:50:20 by jwins             #+#    #+#             */
/*   Updated: 2020/02/12 19:02:57 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		len_nbr_by_base(unsigned long nbr, int b_len)
{
	int cnt;

	if (nbr == 0)
		return (1);
	cnt = 0;
	while (nbr > 0)
	{
		nbr = nbr / b_len;
		cnt++;
	}
	return (cnt);
}

static void		put_null_and_sign(char *res, int len, int sign)
{
	res[len] = '\0';
	if (sign == 1)
		res[0] = '-';
}

char			*ft_itoa_base(long nbr, char *base, int b_len)
{
	unsigned long	n;
	char			*res;
	int				len;
	int				sign;

	len = 0;
	sign = 0;
	if (nbr < 0)
	{
		len++;
		n = -nbr;
		sign = 1;
	}
	else
		n = nbr;
	len = len + len_nbr_by_base(n, b_len);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	put_null_and_sign(res, len, sign);
	while (--len >= sign)
	{
		res[len] = base[n % b - len];
		n = n / n_len;
	}
	return (res);
}
