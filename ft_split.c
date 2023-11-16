/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 13:18:53 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 13:29:41 by daalhosa         ###   ########.fr       */
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
		if (str[i] == del && str[i - 1] != del
			|| str[i] != del && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static void	allocate(char const *str, char del, size_t count)
{
	char	**s;
	size_t	j;
	size_t	k;
	size_t	start;
	size_t	end;

	j = 0;
	k = 1;
	if (!str)
		return (NULL);
	while(str && j < count)
	{
		while(s[k - 1] == del && s[k] !=del || s[k - 1] != del)
		{
			start = k;
			while(s[k] != del)
				k++;
			end = k;
			k++;
		}
		s[j] = ft_substr(str, start, );
		k++;
		j++;
	}
	
}

static void free_everything(/*params*/);
char	**ft_split(char const *s, char c)
{
	char 		**string;
	size_t		count;

	count = wordcount(s, c);
	string = malloc(sizeof(char *) * (count + 1));
	if (!string)
		return (NULL);
	return(string);

}

int main () { 
	char str [] = ",,,,sdsds,,,,sdsd,,,sdsf";
	char **pepino = ft_split(str, ',');
	int i;
	i = 0;
	while(i < 3){
		printf("%s", pepino[i]);
		i++;
	}
}