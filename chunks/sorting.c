/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 15:33:59 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/03 01:26:29 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_list **lst_a)
{
	t_list	*tmp;

	tmp = (*lst_a);
	if (tmp->content > tmp->next->content)
		sa((*lst_a), 1);
}

void	sort_3(t_list **lst_a)
{
	t_list	*tmp;

	tmp = (*lst_a);
	if (tmp->content > tmp->next->content)
	{
		if (tmp->next->content < tmp->next->next->content && tmp->content < tmp->next->next->content)
			sa((*lst_a), 1);
		else if (tmp->next->content > tmp->next->next->content)
		{
			sa((*lst_a), 1);
			rra(lst_a, 1);
		}
		else if (tmp->next->content < tmp->next->next->content && tmp->content > tmp->next->next->content)
			ra(lst_a, 1);
	}
	else if (tmp->content < tmp->next->content)
	{
		if (tmp->next->content > tmp->next->next->content && tmp->content < tmp->next->next->content)
		{
			sa((*lst_a), 1);
			ra(lst_a, 1);
		}
		else if (tmp->next->content > tmp->next->next->content && tmp->content > tmp->next->next->content)
			rra(lst_a, 1);
	}
}

void	sort_4(t_list **lst_a, t_list **lst_b)
{
	push_1_to_b(lst_a, lst_b);
	sort_3(lst_a);
	pa(lst_a, lst_b);
}

void	sort_5(t_list **lst_a, t_list **lst_b)
{
	push_2_to_b(lst_a, lst_b);
	sort_3(lst_a);
	if ((*lst_b)->content < (*lst_b)->next->content)
		sb((*lst_b), 1);
	pa(lst_a, lst_b);
	pa(lst_a, lst_b);
}

void	sort_100_and_500(t_list **lst_a, t_list **lst_b)
{
	pushing_a_to_b(lst_a, lst_b);
	pushing_b_to_a(lst_a, lst_b);
}
