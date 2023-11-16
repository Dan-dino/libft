/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:32:50 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 16:16:49 by daalhosa         ###   ########.fr       */
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
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		j;

	j = digits(n);
	str = malloc (sizeof (char) * (j + 1));
	if (n < 0)
	{
		j += 1;
		str[0] = '-';
	}
	n = abs(n);
	str[j] = '\0';
	while (n)
	{
		str[j - 1] = (n % 10) + '0';
		n /= 10;
		j--;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_itoa(2147483647));
}
