/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 18:08:39 by jwins             #+#    #+#             */
/*   Updated: 2019/10/09 18:08:42 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	unsigned char *pointer1_clone;
	unsigned char *pointer2_clone;
	unsigned int i;
	
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