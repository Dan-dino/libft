/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 07:43:03 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/06 08:54:29 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int x, int n)
{
	size_t			i;
	unsigned char	*a;

	a = (unsigned char *) b;
	i = 0;
	while (i < n)
	{
		a[i] = (unsigned char) x;
		i++;
	}
	return (b);
}

// int	main(void)
// {
// 	char	a[] = "abcdefg";
// 	printf("%s", ft_memset(a, 'c', 2));
// }
