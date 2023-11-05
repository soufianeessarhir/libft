/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 09:44:02 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/05 03:10:45 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_substr(char const *s, unsigned int start,size_t len)
{
    char    *str;
    size_t i;
    unsigned int  s_len;
    
    if (!s)
        return (NULL); 
    s_len = ft_strlen(s);
    i = 0;
    if(len == 0 || start > s_len)
        return(ft_strdup(""));
    if(len > ft_strlen(s + start))
         len = ft_strlen(s + start);
    str = malloc(len + 1);

    if(!str)
        return (NULL);
    while (i < len)
    {
       str[i] = *(s + i + start);
       i++;
    }
    str[i] = '\0';
    return (str);
}
