/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 08:41:35 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/06 13:20:19 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	b;

	i = ft_strlen(s);
	while (s[i] != (char) c)
	{
		if (s[i] == '\0')
			return (NULL);
		i--;
	}
	return ((char *) s + i);
}
