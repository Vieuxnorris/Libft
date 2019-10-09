/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isprint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwins <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 18:38:22 by jwins             #+#    #+#             */
/*   Updated: 2019/10/07 18:45:45 by jwins            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_isprint(int character)
{
	if (character >= 31 && character <= 127)
		return (1);
	return (0);
}

int main()
{
	int num = ft_isprint('\0');
	printf("%d",num);
	return (0);
}
