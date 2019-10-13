/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/13 16:05:37 by jwins             #+#    #+#             */
/*   Updated: 2019/10/13 16:06:43 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strlen_trim(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (*s1 != '\0')
	{
		if (*s1 == *set)
		{
			i--;
			s1++;
		}
		i++;
		s1++;
	}
	return (i);
}

char	*ft_copie_trim(char const *s1, char const *set, char *copie_trim)
{
	while (*s1 != '\0')
	{
		if (*s1 == *set)
			s1++;
		*copie_trim = *(char *)s1;
		copie_trim++;
		s1++;
	}
	*copie_trim = '\0';
	return (copie_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	taille;
	char	*trim_copie;

	if (*s1 == '\0')
		return (NULL);
	taille = ft_strlen_trim(s1, set);
	trim_copie = (char *)malloc(sizeof(*s1) * (taille + 1));
	if (trim_copie == NULL)
		return (NULL);
	ft_copie_trim(s1, set, trim_copie);
	return (trim_copie);
}
