/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 19:08:28 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 19:08:30 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char *pointer1_clone;
	unsigned char *pointer2_clone;
	int i;
	
	pointer1_clone = (unsigned char *)pointer1;
	pointer2_clone = (unsigned char *)pointer2;
	i = 0;
	while (i < size && (*pointer1_clone == *pointer2_clone))
	{
		pointer1_clone++;
		pointer2_clone++;
		i++;
	}
	if (i == size)
		return (0);
	return (*pointer1_clone - *pointer2_clone);
}

int ft_strlen(const char *str)
{
	int i;
	
	i = 0;
	while (*str != '\0')
	{
		str++;
		i++;
	}
	return (i);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	
	if (*little == '\0')
		return ((char *)big);
	i = ft_strlen(little);
	while (*big != '\0' && len >= i)
	{
		if (*big == *little && (ft_memcmp(big, little, i) == 0))
			return ((char *)big);
		big++;
		len--;
	}
	return (NULL);
}