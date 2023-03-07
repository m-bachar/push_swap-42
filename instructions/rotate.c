/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:43:57 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/06 10:58:52 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list **lst, int status)
{
	if (status == 1)
		ft_printf("ra\n");
	(*lst) = (*lst)->next;
}

void	rb(t_list **lst, int status)
{
	if (status == 1)
		ft_printf("rb\n");
	(*lst) = (*lst)->next;
}

void	rr(t_list **lst_a, t_list **lst_b, int status)
{
	if (status == 1)
		ft_printf("rr\n");
	ra(lst_a, 0);
	rb(lst_b, 0);
}
