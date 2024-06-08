/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:37:03 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/08 12:37:07 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr1;

	if (n == 0)
		return (0);
	ptr = (unsigned char *)s1;
	ptr1 = (unsigned char *)s2;
	while ((*ptr == *ptr1) && n - 1 > 0)
	{
		ptr++;
		ptr1++;
		n--;
	}
	return ((int)(*ptr - *ptr1));
}
