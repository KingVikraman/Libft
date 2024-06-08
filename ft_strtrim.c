/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:53:32 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/08 12:53:34 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	char	*new;

	if (!s1 || !set)
		return (Null);
	while (s1)
	{
		if (ft_check_set(((char)*s1), set) == 1)
			s1++;
		else
			break ;
	}
	size = ft_strlen(s1);
	while (size != 0)
	{
		if (ft_check_set(s1[size - 1], set) == 1)
			size--;
		else
			break ;
	}
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (Null);
	ft_strlcpy(new, (char *)s1, size + 1);
	return (new);
}
