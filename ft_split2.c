/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:27:33 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/16 17:34:35 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wordcount(char const *str, char del)
{
	size_t	count;
	size_t	i;

	i = 1;
	count = 0;
	if (str[i - 1] == '\0')
		return (0);
	while (str[i] != '\0')
	{
		if ((str[i] == del && str[i - 1] != del) 
			|| (str[i] != del && str[i + 1] == '\0'))
			count++;
	}
	return (count);
}



int	main(void)
{
	char const	*str;
	char		del;

	str = "this is a string";
	del = 's';

	printf("%zu", wordcount(str, del));
}