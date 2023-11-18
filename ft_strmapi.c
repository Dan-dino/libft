/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 16:32:20 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 17:23:33 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	f(unsigned int i, char c)
{
	
	c -= 32;
	return (c);
}

void	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		j;
	char		*str;

	i = ft_strlen(s);
	j  = 0;
	if(!s || !f)
		return (NULL);
	str = malloc(sizeof (char) * (i + 1));
	if(!str)
		return (NULL);
	while (s[j])
	{
		str[j] = f(j, s[j]);
		j++;
		
	}
	str[j] = '\0';
	return (str);
}

int	main()
{
	char s[] = "this is a string";
	printf("%s", ft_strmapi(s, f));
}
