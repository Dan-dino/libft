/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:27:52 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/06 11:38:07 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0' && s[i] != (char) c)
		i++;
	if (s[i] == (char)c)
		return ((char *) s + i);
	return (NULL);
}

// int	main(void)
// {
// 	char *s = "this is a string";
// 	printf("%s", ft_strchr(s, 'a'));
// }
