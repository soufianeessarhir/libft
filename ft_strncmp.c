/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:26:33 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 22:45:14 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

   int ft_strncmp(const char *s1, const char *s2, size_t n)
   {
        size_t i;
        
        i = 0;
        while (s1[i]== s2[i] && i <= n)
            i++;
        return (s1[i]-s2[i]);
   }
   int main()
   {
        char *s1 = NULL;
        char *s2 = "";
        size_t n = 5;
        printf("%d\n",ft_strncmp(s1,s2,n));
        printf("%d\n",strncmp(s1,s2,n));
   }