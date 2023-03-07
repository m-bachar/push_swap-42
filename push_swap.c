/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/06 11:05:08 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	char		**splitted;
	t_list		*lst_a;
	t_list		*lst_b;
	t_list		*head;
	int			size;
	int			i;

	lst_b = NULL;
	if (argc > 1)
	{
		if (!ft_isempty(argv))
			ft_errors("One of the arguments has only blank spaces");
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
		size = 0;
		while (splitted[size])
			size++;
		i = 0;
		while (i < size)
			ft_lstadd_back(&lst_a, ft_lstnew(ft_atoi(splitted[i++])));
		pb(&lst_a, &lst_b);
		pb(&lst_a, &lst_b);
		rrb(&lst_b, 0);
		head = lst_b;
		while (head)
		{
			printf("%d\n", head->content);
			head = head->next;
			if (head == lst_b)
				break ;
		}
		// free_all(lst_a, splitted, size);
	}
	else
		exit (0);
}
