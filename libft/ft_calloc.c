/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_calloc.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mchopin <mchopin@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/10/31 15:16:34 by mchopin       #+#    #+#                 */
/*   Updated: 2025/11/02 18:09:59 by mchopin       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	result;
	void	*memptr;

	result = (n * size);
	if (result == 0)
		return (malloc(0));
	if (size != 0 && (result / size != n))
		return (NULL);
	memptr = malloc(size * n);
	if (memptr == NULL)
		return (NULL);
	ft_bzero(memptr, (n * size));
	return (memptr);
}

// int main(void) {
//    int *arr = ft_calloc(10, sizeof(int));
//    int i;
//    i = 0;
//
//    while (i < 10) {
//      printf("%d", arr[i]);
//      i++;
//    }
//    free(arr);
//  }
