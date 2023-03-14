/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:58:50 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/14 14:31:12 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	indexing(t_list *lst_a)
{
	t_list	*mobile;
	int		i;

	i = 0;
	lst_a->index = 0;
	mobile = lst_a;
	while (i < ft_lstsize(lst_a))
	{
		if (lst_a->content > mobile->content)
			lst_a->index++;
		mobile = mobile->next;
		if (mobile == lst_a)
		{
			if (i == ft_lstsize(lst_a) - 1)
				break ;
			lst_a = lst_a->next;
			mobile = mobile->next;
			lst_a->index = 0;
			i++;
		}
	}
	lst_a = lst_a->next;
}
