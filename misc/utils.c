/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:49:13 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/06 23:04:35 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

char	**ft_single_arg(char **str)
{
	char	**splitted;
	char	*joined;
	int		i;
	int		j;

	i = 1;
	j = 0;
	joined = malloc(sizeof(char) * 1);
	if (!joined)
		return (free(joined), NULL);
	while (str[i])
	{
		joined = ft_strjoin(joined, " ");
		joined = ft_strjoin(joined, str[i++]);
	}
	splitted = ft_split(joined, ' ');
	return (free(joined), splitted);
}

int	ft_isnumber(char **str)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (str[j])
	{
		if (ft_strlen(str[j]) == 0)
		{
			ft_errors("One of the arguments is empty");
		}
		while (str[j][i])
		{
			if ((str[j][i] >= '0' && str[j][i] <= '9')
				|| (str[j][i] == '-') || (str[j][i] == '+'))
				i++;
			else
				return (0);
		}
		i = 0;
		j++;
	}
	return (1);
}

int	ft_isint(char *str)
{
	char	*str1;
	char	*str2;
	int		nbr;
	int		i;

	i = 0;
	str2 = str;
	nbr = ft_atoi(str);
	if (*str2 == '+')
		str2++;
	str1 = ft_itoa(nbr);
	if (nbr < INT_MIN
		|| nbr > INT_MAX || !ft_strcmp(str1, str2))
		return (free(str1), 0);
	return (free(str1), 1);
}

int	ft_isdup(char **str)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	while (str[j])
	{
		if (ft_strcmp(str[i], str[j]))
			return (0);
		i++;
		j++;
	}
	return (1);
}
