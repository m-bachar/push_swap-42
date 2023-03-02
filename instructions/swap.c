/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:48 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/02 14:22:02 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list *lst, int status)
{
	int	tmp;

	if (status == 1)
		ft_printf("sa\n");
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}

void	sb(t_list *lst, int status)
{
	int	tmp;

	if (status == 1)
		ft_printf("sb\n");
	tmp = lst->content;
	lst->content = lst->next->content;
	lst->next->content = tmp;
}

void	ss(t_list *lst_a, t_list *lst_b, int status)
{
	if (status == 1)
		ft_printf("ss\n");
	sa(lst_a, 0);
	sb(lst_b, 0);
}
