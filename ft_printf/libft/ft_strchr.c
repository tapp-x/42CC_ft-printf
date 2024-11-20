/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tappourc <tappourc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 18:04:17 by tappourc          #+#    #+#             */
/*   Updated: 2023/11/04 10:47:26 by tappourc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (s[i] != '\0' && (s[i] != c % 128))
		i++;
	if (s[i] == c % 128)
	{
		str += i;
		return (str);
	}
	return (0);
}
