/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/11/02 20:53:51 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 21:51:39 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// still need to runthrough paco, computer was slow asf 
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mem = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!mem)
		return (NULL);
	while (s1[i])
		mem[j++] = s1[i++];
	i = 0;
	while (s2[i])
		mem[j++] = s2[i++];
	mem[j] = '\0';
	return (mem);
}

// int	main(void)
// {
// 	char *s1 = "(//ooO ";
// 	char *s2 = "3 Ooo//)";

// 	printf("%s", ft_strjoin(s1, s2));
// }
