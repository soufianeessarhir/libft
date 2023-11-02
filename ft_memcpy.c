/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:12:11 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/02 18:01:28 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
  size_t i;
  unsigned char *str;
  const unsigned char *src1;

  i = 0;
  str =(unsigned char *)(dst); 
 src1  = ( const unsigned char *)(src);
  
  if (dst == src)
    return (dst);
  while (i < n)
  {
    str[i] = src1[i]; 
    i++; 
  }
  return (dst);
}
