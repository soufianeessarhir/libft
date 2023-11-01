/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 22:00:35 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/31 22:19:34 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int len;
    
    len = ft_strlen(s);
    while (len)
    {
        if (s[len] == c)
            return ((char *)(s + len));
        len--;
    }
    if (c == '\0')
         return ((char *)(s + len));
    return NULL;
}

