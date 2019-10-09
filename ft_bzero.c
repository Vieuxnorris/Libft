/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bzero.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:42:45 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 19:42:48 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memset(void *s, int c, size_t n)
{
	unsigned char *pointeur;
	
	pointeur = (unsigned char *)s;
	while (n > 0)
	{
		*pointeur = (unsigned char)c;
		pointeur++;
		n--;
	}
	return (s);
}

void ft_bzero(void *str, size_t size)
{
	ft_memset(str, 0, size);
}