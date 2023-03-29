/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:11:54 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/29 01:26:28 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_max(t_list **lst_b, int half_chunk, int index)
{
	t_list	*tmp;
	int		counter;

	tmp = *lst_b;
	counter = 0;
	while ((tmp)->next != (*lst_b))
	{
		if ((tmp)->index == index)
			break ;
		counter++;
		(tmp) = (tmp)->next;
	}
	if (counter <= half_chunk)
		return (1);
	return (0);
}

void	push_to_a(t_list **lst_a, t_list **lst_b)
{
	int	half_chunk;
	int	index;

	index = ft_lstsize(*lst_b) - 1;
	while (index >= 0)
	{
		half_chunk = ft_lstsize(*lst_b) / 2;
		if (find_max(lst_b, half_chunk, index) == 1)
		{
			while ((*lst_b)->index != index)
				rb(lst_b, 1);
			pa(lst_a, lst_b);
		}
		else
		{
			while ((*lst_b)->index != index)
				rrb(lst_b, 1);
			pa(lst_a, lst_b);
		}
		index--;
	}
}
