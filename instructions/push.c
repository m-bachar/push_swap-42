/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 08:42:42 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/02 14:36:08 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list *lst_a, t_list *lst_b)
{
	t_list	*tmp;
	t_list	*last;
	int		i;

	(void)lst_a;
	i = 0;
	tmp = lst_b;
	last = lst_b;
	while (last->next != lst_b)
		last = last->next;
	printf("=============== Before PA ==================\n");
	while (i < ft_lstsize(lst_b))
	{
		printf("Content of Node %d = %d\n", i, lst_b->content);
		lst_b = lst_b->next;
		i++;
	}
	printf("============================================\n");
	lst_b = tmp;
	tmp->content = lst_b->content;
	tmp->next = lst_b->next;
	lst_b = lst_b->next;
	lst_b->prev = last;
	last->next = lst_b;
	i = 0;
	printf("=============== After PA ==================\n");
	while (i < ft_lstsize(lst_b))
	{
		printf("Content of Node %d = %d\n", i, lst_b->content);
		lst_b = lst_b->next;
		i++;
	}
	printf("============================================\n");
	free(tmp);
}
