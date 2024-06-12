/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvikrama <rvikrama@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 12:35:41 by rvikrama          #+#    #+#             */
/*   Updated: 2024/06/08 12:35:50 by rvikrama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int ft_isalpha(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}

/*
int main() {
    char test_char;

    printf("Enter a character: ");
    scanf("%c", &test_char);

    if (ft_isalpha(test_char)) {
        printf("%c is an alphabet character.\n", test_char);
    } else {
        printf("%c is not an alphabet character.\n", test_char);
    }

    return 0;
}
*/