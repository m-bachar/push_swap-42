/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:48 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/28 11:09:21 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *lst, int i)
{
	int	tmp;

	if (i == 1)
		ft_printf("sa\n");
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}

void	sb(t_list *lst, int i)
{
	int	tmp;

	if (i == 1)
		ft_printf("sb\n");
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}

void	ss(t_list *lst_a, t_list *lst_b)
{
	sa(lst_a, 0);
	sb(lst_b, 0);
}
