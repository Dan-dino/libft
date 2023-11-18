/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 08:54:19 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/15 07:58:01 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char *s, char c)
{
	int	i;

	i = 0;

	while (s[i])
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtim(char const *s1, char const *set)
{
	char const	**s3;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = ft_strlen(s1);
	k = 0;

	while (s1[i] && (check(set, s1[i]) == 1))		
		i++;
	while (s1[j] && (check(set, s1[j]) == 1))		
		j--;	
	s3 = malloc(sizeof(char *) * (j - i + 1));
	if(!s3)
		return (NULL);
	i = 0;
	while (k < j)
	{
		s3[k] = s1[i];
		k++;
		i++;
	}
	s3[k] = '\0';
	return (s3);
}
