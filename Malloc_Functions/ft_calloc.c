/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:55:08 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/23 21:48:38 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	char			*a;
	unsigned int	tot;
	size_t			i;

	tot = size * nitems;
	a = malloc(size * nitems);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (tot > 0)
	{
		a[i] = 0;
		i++;
		tot--;
	}
	return ((void *)a);
}
