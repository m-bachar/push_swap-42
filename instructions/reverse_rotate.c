/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:47:31 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/02 14:21:43 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_list *lst, int status)
{
	if (status == 1)
		ft_printf("rra\n");
	lst = lst->prev;
}

void	rrb(t_list *lst, int status)
{
	if (status == 1)
		ft_printf("rrb\n");
	lst = lst->prev;
}

void	rrr(t_list *lst_a, t_list *lst_b, int status)
{
	if (status == 1)
		ft_printf("rrr\n");
	rra(lst_a, 0);
	rrb(lst_b, 0);
}
