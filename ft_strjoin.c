/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:08:40 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/13 08:18:11 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	s3 = malloc (sizeof (char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1, ft_strlen(s1) + 1);
	ft_strlcpy(s3 + ft_strlen(s1) + 1, s2, ft_strlen(s2) + 1);
	return (s3);
}

// int	main(void)
// {
// 	char	s1[] = "this is";
// 	char	s2[] = " a string";

// 	printf("%s", ft_strjoin(s1,s2));
// }
