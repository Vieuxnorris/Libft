/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/08 19:05:04 by jwins             #+#    #+#             */
/*   Updated: 2019/10/08 19:05:06 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
	char *d;
	char *s;
	size_t len;
	size_t dst_len;
	
	if (!(d = (char *)ft_memchr(dest, '\0', size)))
		return (size + ft_strlen(src));
	s = (char *)src;
	d = (char *)dest;
	dst_len = ft_strlen(dest);
	len = dst_len + ft_strlen(s);
	d += dst_len;
	while (dst_len++ < size - 1 && *s)
		*d++ = *s++;
	*d = '\0';
	return (len);
}