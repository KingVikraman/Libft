/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 10:55:08 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/11 10:55:11 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*buffer;
	int		area;

	area = (nmemb * size);
	buffer = (char *)malloc(sizeof(char) * area);
	if (!buffer)
		return (NULL);
	while (--area >= 0)
		buffer[area] = '\0';
	return ((void *)buffer);
}
