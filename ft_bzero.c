/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:34:22 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/12 16:24:51 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *r, size_t n)
{
	size_t	i;
	char	*str;

	str = r;
	i = 0;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
