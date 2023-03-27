/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:11:54 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/27 16:39:14 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int find_max(t_list **lst_b, int half_chunk)
{
	t_list **tmp;
	int index;
	int counter;

	tmp = lst_b;
	counter = 0;
	index = ft_lstsize(*lst_b) - 1;
	while ((*tmp)->next != (*lst_b))
	{
		if ((*tmp)->index == index)
			break;
		counter++;
		(*tmp) = (*tmp)->next;
	}
	if (counter <= half_chunk)
		return (1);
	return (0);
}

void push_to_a(t_list **lst_a, t_list **lst_b)
{
	int half_chunk;
	int index;
	int size;
	int i;

	half_chunk = ft_lstsize(*lst_b) / 2;
	index = ft_lstsize(*lst_b) - 1;
	i = 0;
	size = 0;
	while (size < ft_lstsize(*lst_b))
	{
		if (find_max(lst_b, half_chunk) == 1)
		{
			rrb(lst_b, 1);
			if ((*lst_b)->index == index)
			{
				pa(lst_a, lst_b);
				index--;
				break ;
			}
		}
		else
		{
			rb(lst_b, 1);
			if ((*lst_b)->index == index)
			{
				pa(lst_a, lst_b);
				index--;
				break ;
			}
		}
		size++;
	}
}
