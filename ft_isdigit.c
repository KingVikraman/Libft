/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:36:16 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/08 12:36:19 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    else 
        return (0); 
}
_________________________________________________
//or you can also use this//

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}
