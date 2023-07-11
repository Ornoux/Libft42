/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 13:55:02 by npatron           #+#    #+#             */
/*   Updated: 2023/03/29 16:26:19 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == ((unsigned char)c))
			return (&((unsigned char *)s)[i]);
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	printf("%s\n\n", ft_memchr("bonjour", 'n', 0));
	printf("%s\n\n", memchr("bonjour", 'n', 0));
	return (0);
}*/