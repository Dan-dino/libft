/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:32:50 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 08:12:17 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	digits(int n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (1);
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	abs(int n)
{
	if(n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		j;

	i = 0;
	j = digits(n);
	str = malloc (sizeof (char) * (j + 1));
	if(n < 0)
	{
		str[0] = '-';
		i++;
	}
	n = abs(n);
	while (n)
	{
		str[i] = (n / 10^j) + '0';
		j--;
		i++;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(3));
}
