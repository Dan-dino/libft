/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daalhosa <daalhosa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 11:01:27 by daalhosa          #+#    #+#             */
/*   Updated: 2023/11/20 11:01:31 by daalhosa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char    *ft_strchr(const char *s, int c);
char    *ft_substr(char const *s, unsigned int start, size_t len);
size_t  ft_strlcpy(char *dst, const char *src, size_t dstsize);

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
		i++;
	}
	return (count);
}

char    *allocate(char const **s, char del)
{
    size_t    i;


    // Find the start of the word
    while (**s && **s == del)
        (*s)++;

    if (!**s)
        return NULL;
    i = 0;
    // Find the end of the word
    while ((*s)[i] && (*s)[i] != del)
        i++;

    // Allocate memory for the word
    char *str = ft_substr(*s, 0, i);

    // Update s to point to the next word
    *s += i;

    return str;
}

char    **ft_split(char const *s, char c)
{
    char		**str;
    size_t		count;
    size_t		i;

	const char	*temp = s;
    count = wordcount(s, c);
    i = 0;

    // Allocate memory for the array of strings
    str = malloc(sizeof (char *) * (count + 1));
    if (!str)
        return NULL;
    // Populate the array of strings
    while (i < count)
    {
        str[i] = allocate(&temp, c);

        if (!*str)
        {
            while (i > 0)
            {
                i--;
                free(str[i]);
            }
            free(str);
            return NULL;
        }
        i++;
    }
    str[i] = NULL;  // Null-terminate the array of strings
    return str;
}


char    *ft_strchr(const char *s, int c)
{
    size_t    i;

    i = 0;
    while (s[i] != '\0' && s[i] != (char) c)
        i++;
    if (s[i] == (char)c)
        return ((char *) s + i);
    return (NULL);
}

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;

    sub = (char *) malloc (sizeof (char) * (len + 1));
    if (!sub)
        return (NULL);
    ft_strlcpy(sub, s + start, len + 1);
    sub[len + 1] = '\0';
    return (sub);
}

size_t    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t    i;

    i = 0;
    if (dstsize > 0)
    {
        while (i < dstsize - 1 && src[i] != '\0')
        {
            dst [i] = src[i];
            i++;
        }
        dst[i] = '\0';
    }
    while (src[i] != '\0')
        i++;
    return (i);
}


int    main(void)
{
    const char    *str = "this is a string";
    char        del = ' ';
    char        **result = ft_split(str, del);
    int            i = 0;

    // Print the words in the array
    while (result[i] != NULL)
    {
        printf("%s\n", result[i]);
        free(result[i]);
        i++;
    }
    free(result);
    return (0);
}