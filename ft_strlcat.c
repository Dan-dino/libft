/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:06:10 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/06 13:13:33 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = ft_strlen(dst);
	i = 0;
	if (dstsize > 0)
	{
		while (src[i] != '\0' || i < dstsize)
		{
			dst[j + i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return (i);
}
