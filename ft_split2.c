/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:27:33 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 17:34:35 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *str, char del)
{
	size_t	count;
	size_t	i;

	i = 1;
	count = 0;
	if (str[i - 1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] == del && str[i - 1] != del)
			|| (str[i] != del && str[i + 1] == '\0'))
			count++;
		i++;
	}
	return (count);
}

char	*allocate(char const **s, char del)
{
	size_t	i;
	char	*str;

// Find the start of the word
	while (**s && **s == del)
		(*s)++;
	if (!**s)
		return (NULL);
	i = 0;
// Find the end of the word
	while ((*s)[i] && (*s)[i] != del)
		i++;
    // Allocate memory for the word
	*str = ft_substr(*s, 0, i - 1);
    // Update s to point to the next word
	*s += i;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char		**str;
	size_t		count;
	size_t		i;
	const char	*temp = s;

	count = wordcount(s, c);
	i = 0;
	str = malloc(sizeof (char *) * (count + 1));
	if (!str)
		return (NULL);
	while (i < count)
	{
		str[i] = allocate(&temp, c);
		if (!*str)
		{
			while (i-- > 0)
			{
				free(str[i]);
			}
			free(str);
			return (NULL);
		}
		i++;
	}
	str[i] = '\0';
	return (str);
}

int	main(void)
{
	const char	*str = ",,,someTHING,,,,,,something,,";
	char		del = ',';
	char		**result = ft_split(str, del);
	int			i = 0;

	while (result[i] != NULL)
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}
