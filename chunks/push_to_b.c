/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:58:50 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/04 00:24:33 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	if (ft_lstsize(*lst_a) <= 100)
		chunk_end = ft_lstsize(*lst_a) / 5;
	else
		chunk_end = ft_lstsize(*lst_a) / 11;
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
}
