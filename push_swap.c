/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/03 22:42:21 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Leaks at exit */

#include "push_swap.h"

void	filling_stack_a(t_list **lst_a, char **splitted)
{
	int			size;
	int			i;

	size = 0;
	while (splitted[size])
		size++;
	i = 0;
	while (i < size)
		ft_lstadd_back(lst_a, ft_lstnew(ft_atoi(splitted[i++])));
}

void	pushing_a_to_b(t_list **lst_a, t_list **lst_b)
{
	indexing(lst_a);
	push_to_b(lst_a, lst_b);
	(*lst_a) = NULL;
}

void	pushing_b_to_a(t_list **lst_a, t_list **lst_b)
{
	indexing(lst_b);
	push_to_a(lst_a, lst_b);
	indexing(lst_a);
	(*lst_b) = NULL;
}

int	already_sorted(t_list **lst_a)
{
	t_list	*tmp;

	tmp = (*lst_a);
	while (tmp->next != (*lst_a))
	{
		if (tmp->content < tmp->next->content)
			tmp = tmp->next;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_list		*lst_a = NULL;
	t_list		*lst_b = NULL;
	char		**splitted;
	int			size;

	if (argc > 1)
	{
		if (!ft_isempty(argv))
			ft_errors("One of the arguments has only blank spaces");
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
		filling_stack_a(&lst_a, splitted);
		size = ft_lstsize(lst_a);
		if (!already_sorted(&lst_a))
		{
			if (size == 3 || size == 2 || size == 4)
				sort_2_3_4(&lst_a, &lst_b);
			else if (size == 5)
				sort_5(&lst_a, &lst_b);
			else
				sort_100_and_500(&lst_a, &lst_b);
		}
	}
	exit (0);
}
