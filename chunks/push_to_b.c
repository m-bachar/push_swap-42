/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:58:50 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/28 01:35:50 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Leaks in push_to_b() */

#include "../push_swap.h"

static void	free_lst(t_list	**lst)
{
	int	size;

	size = ft_lstsize(*lst);
	while (size)
	{
		(*lst)->content = 0;
		(*lst)->index = 0;
		(*lst)->next = NULL;
		(*lst)->prev = NULL;
		size--;
	}
	free(*lst);
}

void	push_to_b(t_list **lst_a, t_list **lst_b)
{
	int	chunk_start;
	int	chunk_end;
	int	i;
	int	ref;
	int	size;

	i = 0;
	chunk_start = 0;
	size = ft_lstsize(*lst_a);
	if (ft_lstsize(*lst_a) <= 200)
		chunk_end = ft_lstsize(*lst_a) / 5;
	else
		chunk_end = ft_lstsize(*lst_a) / 6;
	ref = chunk_end;
	while (size)
	{
		i = 0;
		while (i < ref && size)
		{
			if ((*lst_a)->index < chunk_end)
			{
				if ((*lst_a)->index <= ((chunk_start + chunk_end) / 2))
					pb(lst_a, lst_b);
				else if ((*lst_a)->index > ((chunk_start + chunk_end) / 2))
				{
					pb(lst_a, lst_b);
					if ((*lst_a)->index >= chunk_end)
						rr(lst_a, lst_b, 1);
					else
						rb(lst_b, 1);
				}
				i++;
				size--;
			}
			else
				ra(lst_a, 1);
		}
		chunk_start += ref;
		chunk_end += ref;
	}
	free_lst(lst_a);
}
