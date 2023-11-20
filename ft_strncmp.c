/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 09:16:30 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/20 11:02:20 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*string1;
	unsigned char	*string2;

	string1 = (unsigned char *) s1;
	string2 = (unsigned char *) s2;
	i = 0;
	while ((string1[i] != '\0' && string2[i] != '\0') && i < n - 1
		&& string1[i] == string2[i])
	{
		i++;
	}
	if (n == 0)
		return (0);
	return (string1[i] - string2[i]);
}
