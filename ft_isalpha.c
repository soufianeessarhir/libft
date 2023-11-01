/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:29:36 by sessarhi          #+#    #+#             */
/*   Updated: 2023/10/30 18:29:37 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 int ft_isalpha(int c)
 {
    if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') )
        return 1;
    return 0;
 }
