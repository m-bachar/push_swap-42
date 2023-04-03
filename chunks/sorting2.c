/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 01:05:48 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/03 01:24:52 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_list **lst_a, int half_chunk, int index)
{
	t_list	*tmp;
	int		counter;

	tmp = *lst_a;
	counter = 0;
	while ((tmp)->next != (*lst_a))
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

void	push_1_to_b(t_list **lst_a, t_list **lst_b)
{
	int	index;

	index = 0;
	indexing(lst_a);
	while (index < 1)
	{
		if (find_min(lst_a, 2, index) == 1)
		{
			while ((*lst_a)->index != index)
				ra(lst_a, 1);
			pb(lst_a, lst_b);
		}
		else
		{
			while ((*lst_a)->index != index)
				rra(lst_a, 1);
			pb(lst_a, lst_b);
		}
		index++;
	}
}

void	push_2_to_b(t_list **lst_a, t_list **lst_b)
{
	int	index;

	index = 0;
	indexing(lst_a);
	while (index <= 1)
	{
		if (find_min(lst_a, 2, index) == 1)
		{
			while ((*lst_a)->index != index)
				ra(lst_a, 1);
			pb(lst_a, lst_b);
		}
		else
		{
			while ((*lst_a)->index != index)
				rra(lst_a, 1);
			pb(lst_a, lst_b);
		}
		index++;
	}
}

void	sort_2_3_4(t_list **lst_a, t_list **lst_b)
{
	(void)lst_b;
	sort_2(lst_a);
	sort_3(lst_a);
	sort_4(lst_a, lst_b);
}
