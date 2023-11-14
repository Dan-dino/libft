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
		if (str[i] == del && str[i - 1] != del
			|| str[i] != del && str[i + 1] == '\0')
			count++;
		i++;
	}
	return (count);
}

static void	allocate(char *str)
{
	
}
