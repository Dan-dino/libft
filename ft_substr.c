/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 07:48:17 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/14 17:21:15 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;

	sub = (char *) malloc (sizeof (char) * len + 1);
	if (!sub)
		return (NULL);
	ft_strlcpy(sub, s + start, len + 1);
	sub[len + 1] = '\0';
	return (sub);
}

// int	main(void)
// {
// 	char	s[] = "this is a string";

// 	printf("%s", ft_substr(s, 10, 6));
// }
