/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:23:02 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/05 17:28:46 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*str1;
	char	*str2;
	size_t	i;

	str1 = (char *)dst;
	str2 = (char *)src;
	i = 0;
	if (str1 == str2)
		return (dst);
	while (i < n)
	{
		str1[i] = str2[i];
		i++;
	}
	return (dst);
}

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s1)
{
	size_t		len;
	char		*dst;

	len = ft_strlen(s1);
	dst = malloc(len * sizeof(char) + 1);
	if (!dst)
		return (NULL);
	dst[len] = '\0';
	ft_memcpy(dst, s1, len);
	return (dst);
}

int	ft_strcmp(char	*s1, char	*s2)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] != '\0' || (str2[i] != '\0'))
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	return (1);
}
