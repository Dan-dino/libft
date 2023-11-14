/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:28:29 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/06 08:54:42 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memmove(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	size_t	i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (d == NULL || s == NULL)
		return (NULL);
	if (d < s)
	{
		while (i < n)
		{
			d[n - i++] = s[n - i++];
		}
	}
	else
	{
		while (i < n)
		{
			d[i++] = s[i++];
		}
	}
	return (dest);
}
