/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tappourc <tappourc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 12:33:40 by tappourc          #+#    #+#             */
/*   Updated: 2023/11/04 10:20:56 by tappourc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_strlen_double(char *s1, char *s2)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	return (i + j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		lenght;
	int		i;
	int		y;
	char	*dest;

	i = 0;
	y = 0;
	if (!s1 || !s2)
		return (NULL);
	lenght = ft_strlen_double((char *)s1, (char *)s2) + 1;
	dest = malloc(lenght * (sizeof(char)));
	if (!dest)
		return (NULL);
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[y] != '\0')
	{
		dest[i + y] = s2[y];
		y++;
	}
	dest[i + y] = '\0';
	return (dest);
}
