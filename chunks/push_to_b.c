/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_to_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 15:58:50 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/08 20:40:30 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	increment(t_list *a)
{
	a->chunkstart += a->ref;
	a->chunkend += a->ref;
}

void	initializing(t_list **lst_a, t_list *a)
{
	a->i = 0;
	a->chunkstart = 0;
	a->size = ft_lstsize(*lst_a);
	if (ft_lstsize(*lst_a) <= 100)
		a->chunkend = ft_lstsize(*lst_a) / 5;
	else
		a->chunkend = ft_lstsize(*lst_a) / 11;
	a->ref = a->chunkend;
}

void	push_to_b(t_list **lst_a, t_list **lst_b, t_list *a)
{
	while (a->size)
	{
		a->i = 0;
		while (a->i < a->ref && a->size)
		{
			if ((*lst_a)->index < a->chunkend)
			{
				if ((*lst_a)->index <= ((a->chunkstart + a->chunkend) / 2))
					pb(lst_a, lst_b);
				else if ((*lst_a)->index > ((a->chunkstart + a->chunkend) / 2))
				{
					pb(lst_a, lst_b);
					if ((*lst_a)->index >= a->chunkend)
						rr(lst_a, lst_b, 1);
					else
						rb(lst_b, 1);
				}
				a->i++;
				a->size--;
			}
			else
				ra(lst_a, 1);
		}
		increment(a);
	}
}
