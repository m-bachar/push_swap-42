/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:11:25 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/05 21:33:59 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	sa_ra_rra(t_list **lst_a, int status)
{
	if (status == 0)
	{
		sa((*lst_a), 1);
		ra(lst_a, 1);
	}
	else if (status == 1)
	{
		sa((*lst_a), 1);
		rra(lst_a, 1);
	}
}
