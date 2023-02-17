/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:43:08 by mbachar           #+#    #+#             */
/*   Updated: 2023/01/01 10:18:48 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	i = 0;
	if (lst == NULL)
		return (0);
	ptr = lst;
	while (ptr != NULL)
	{
		ptr = ptr -> next;
		i++;
	}
	return (i);
}
