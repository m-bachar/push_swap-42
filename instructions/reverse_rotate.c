/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:47:31 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/28 10:56:29 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list *lst)
{
	lst = lst->prev;
}

void	rrb(t_list *lst)
{
	lst = lst->prev;
}

void	rrr(t_list *lst_a, t_list *lst_b)
{
	rra(lst_a);
	rrb(lst_b);
}
