/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:00:00 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 16:00:37 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	size_t	i;

	if (*s == '\0')
		return (NULL);
	new_str = ft_strdup((const char *)s);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	while (new_str[i] != '\0')
	{
		new_str[i] = f((unsigned int)i, new_str[i]);
		i++;
	}
	return (new_str);
}
