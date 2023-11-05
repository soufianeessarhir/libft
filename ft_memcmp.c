/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 22:25:45 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 03:20:36 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i ;
    const unsigned char *str1;
    const unsigned char *str2;

    i = 0;
    str1 = (const unsigned char *)(s1);
    str2 = (const unsigned char *)(s2);
    
    while (i < n )
    {
        if (str1[i] != str2[i])
            return (str1[i] - str2[i]);
        i++;
    }
   
    return (0);  
}
// int main ()
// {
//      printf("%d\n",ft_memcmp("", (char *)9, 2));
//      printf("%d\n",memcmp("", (char *)9, 2));
// }

