/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:58:50 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/25 21:13:24 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// if lst_size == 1 && pa is used ==> infinite loop

#include "../push_swap.h"

void	indexing(t_list **lst_a)
{
	t_list	*mobile;
	int		i;

	i = 0;
	(*lst_a)->index = 0;
	mobile = (*lst_a);
	while (i < ft_lstsize(*lst_a))
	{
		if ((*lst_a)->content > mobile->content)
			(*lst_a)->index++;
		mobile = mobile->next;
		if (mobile == *lst_a)
		{
			if (i == ft_lstsize(*lst_a) - 1)
				break ;
			(*lst_a) = (*lst_a)->next;
			mobile = mobile->next;
			(*lst_a)->index = 0;
			i++;
		}
	}
	(*lst_a) = (*lst_a)->next;
}

void	sorting(t_list **lst_a, t_list **lst_b)
{
	int	chunk_start;
	int	chunk_end;
	int	i;
	int	ref;

	i = 0;
	chunk_start = 0;
	if (ft_lstsize(*lst_a) <= 200)
		chunk_end = ft_lstsize(*lst_a) / 5;
	else
		chunk_end = ft_lstsize(*lst_a) / 9;
	ref = chunk_end;
	while (ft_lstsize(*lst_a) > 1)
	{
		i = 0;
		while (i < ref && ft_lstsize(*lst_a) > 1)
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
			}
			else
				ra(lst_a, 1);
		}
		chunk_start += ref;
		chunk_end += ref;
	}
}
