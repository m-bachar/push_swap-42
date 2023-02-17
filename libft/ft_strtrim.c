/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 00:23:09 by mbachar           #+#    #+#             */
/*   Updated: 2022/12/22 22:16:45 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	char	*trimmed;

	i = 0;
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	i++;
	trimmed = malloc(sizeof(char) * (i + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, s1, i + 1);
	trimmed[i] = '\0';
	return (trimmed);
}
