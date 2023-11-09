/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sessarhi <sessarhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:48:57 by sessarhi          #+#    #+#             */
/*   Updated: 2023/11/08 19:33:34 by sessarhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*newstr;

	i = 0;
	if (!s1 || !s2)
		return (NULL);
	newstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!newstr)
		return (NULL);
	while (*s1)
	{
		newstr[i] = *s1++; 
		i++;
	}
	while (*s2)
	{
		newstr[i] = *s2++;
		i++;
	}
	*(newstr + i) = '\0';
	return (newstr);
}
// int main ()
// {
//     char * s1= NULL;
//     char * s2= "hellow";
//     printf("%s\n", ft_strjoin(s1,s2));
// }