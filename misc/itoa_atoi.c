/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   itoa_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 17:11:39 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/05 17:32:28 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	output;

	i = 0;
	sign = 1;
	output = 0;
	while ((str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r')))
		i++;
	if (str[i] == '-')
		sign *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{		
		output = output * 10 + (str[i] - 48);
		i++;
	}
	return (output * sign);
}

static	int	number_len(int nbr)
{
	int	i;

	i = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		i++;
	}
	while (nbr != '\0')
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*itoa;
	int		j;

	if (!n)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = number_len(n);
	j = 0;
	itoa = malloc((i) * sizeof(char) + 1);
	if (!itoa)
		return (NULL);
	if (n < 0)
	{
		itoa[j++] = '-';
		n *= -1;
	}
	itoa[i] = '\0';
	while (i-- > j)
	{
		itoa[i] = (n % 10) + 48;
		n /= 10;
	}
	return (itoa);
}
