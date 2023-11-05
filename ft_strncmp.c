/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:26:33 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 01:02:43 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

   int ft_strncmp(const char *s1, const char *s2, size_t n)
   {
        size_t i;
        
        i = 0;

        while ((s1[i] || s2[i]) && i < n)
         {
            if (s1[i] != s2[i])
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
               i++;
        }
        return (0);
   }
 