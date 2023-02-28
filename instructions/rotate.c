/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 18:43:57 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/28 10:52:29 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_list *lst)
{
	lst = lst->next;
}

void	rb(t_list *lst)
{
	lst = lst->next;
}

void	rr(t_list *lst_a, t_list *lst_b)
{
	ra(lst_a);
	rb(lst_b);
}
