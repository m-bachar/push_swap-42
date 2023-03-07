/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:42:42 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/06 11:00:36 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*lst_b))
		return ;
	tmp = (*lst_b);
	last = (*lst_b);
	while (last->next != (*lst_b))
		last = last->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = last;
	(*lst_b) = tmp->next;
	ft_lstadd_front(lst_a, ft_lstnew(tmp->content));
	free(tmp);
}

void	pb(t_list **lst_a, t_list **lst_b)
{
	t_list	*tmp;
	t_list	*last;

	if (!(*lst_a))
		return ;
	tmp = (*lst_a);
	last = (*lst_a);
	while (last->next != (*lst_a))
		last = last->next;
	tmp->prev->next = tmp->next;
	tmp->next->prev = last;
	(*lst_a) = tmp->next;
	ft_lstadd_front(lst_b, ft_lstnew(tmp->content));
}
