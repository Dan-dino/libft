/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 12:40:56 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/07 09:33:15 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmem, size_t size)
{
	char	*s;

	if (!nmem || !size)
	{
		nmem = 1;
		size = 1;
	}
	s = malloc(sizeof (nmem * size) + 1);
	if (!s)
		return (NULL);
	ft_bzero(s, (nmem * size));
	return (s);
}
