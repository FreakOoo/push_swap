/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_split.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/03 20:50:20 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/05 18:25:10 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_me(char **result)
{
	int	i;

	if (!result)
		return ;
	i = 0;
	while (result[i])
	{
		free(result[i]);
		i++;
	}
	free(result);
}

static int	ft_word_count(char const *s, char c)
{
	int	i;
	int	word_count;

	word_count = 0;
	i = 0;
	while (s[i])
	{
		if ((s[i]) && (s[i] != c) && ((s[i + 1] == c) || (s[i + 1] == '\0')))
			word_count++;
		i++;
	}
	return (word_count);
}

static int	word_saver(char const *s, char c, char **result)
{
	int	i;
	int	start;
	int	word_i;

	i = 0;
	word_i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[word_i] = ft_substr(s, start, i - start);
			if (!result[word_i])
				free_me(result);
			word_i++;
		}
	}
	result[word_i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = ft_word_count(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	if (!word_saver(s, c, result))
		return (NULL);
	result[word_count] = NULL;
	return (result);
}

// int	main(void)
// {
// 	int		i;
// 	char	*s;
// 	char	c;
// 	char	**res;

// 	i = 0;
// 	s = "test- en- die ding";
// 	c = '-';
// 	res = ft_split(s, c);
// 	while (res[i])
// 	{
// 		printf("%s\n", res[i]);
// 		i++;
// 	}
// }
