/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 10:03:55 by npatron           #+#    #+#             */
/*   Updated: 2023/04/11 14:44:56 by npatron          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (s[i])
	{
		if ((s[i] != c && s[i] != '\0')
			&& (s[i + 1] == c || s[i + 1] == '\0'))
			j++;
			i++;
	}
	return (j);
}

static char	*copy_string(char const *s, char c, int i)
{
	char	*copy;
	int		j;
	int		k;
	int		len;

	j = i;
	k = 0;
	while (s[j] && s[j] != c)
		j++;
	len = j - i;
	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);
	while (k < len)
	{
		copy[k] = s[i];
		k++;
		i++;
	}
	copy[k] = '\0';
	return (copy);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	dest = malloc((sizeof (char *)) * ((count_words(s, c)) + 1));
	if (!dest)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			dest[j] = copy_string(s, c, i);
			j++;
		}
		while (s[i] != c && s[i])
			i++;
		while (s[i] == c && s[i])
			i++;
	}
	dest[j] = 0;
	return (dest);
}

/*
int main(int ac, char **av)
{
    char    **tab = ft_split(av[1], av[2][0]);
    int     i;
    (void)ac;
    i = 0;
    while (tab[i] != NULL)
    {
        printf("--> %s\n", tab[i]);
        i++;
    }
    (free (tab));
}
*/
/*
int	size_words(char const *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


char	*strtotab(char const *s, char c)
{
	char	**dest;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	dest = malloc(size_words(s) * sizeof(char) + 1000);
	while (s[i])
	{
		if (s[i] != c)
		{	
			dest[j][k] = s[i];
			k++;
			i++;
		}
		if (s[i] == c)
		{
			dest[j][k] = '\0';
			j++;
			i++;
		}
		k = 0;
		i++;
	}
	return (*dest);
}

int main()
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	*tab = strtotab("Bonjour je m'appelle Nicolas", ' ');
	while (tab[i])
	{
		printf("%s\n" ,tab[i]);
		i++;
	}
	return (0);
}








char	**ft_split(char const *s, char c)
{


	
}
*/