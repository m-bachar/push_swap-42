/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/29 01:45:56 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	filling_stack_a(t_list **lst_a, char **splitted)
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

static void	pushing_a_to_b(t_list **lst_a, t_list **lst_b)
{
	indexing(lst_a);
	push_to_b(lst_a, lst_b);
	(*lst_a) = NULL;
}

static void	pushing_b_to_a(t_list **lst_a, t_list **lst_b)
{
	indexing(lst_b);
	push_to_a(lst_a, lst_b);
	indexing(lst_a);
}

int	main(int argc, char **argv)
{
	char		**splitted;
	int			i;
	t_list		*lst_a;
	t_list		*lst_b;

	i = 0;
	if (argc > 1)
	{
		if (!ft_isempty(argv))
			ft_errors("One of the arguments has only blank spaces");
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
		filling_stack_a(&lst_a, splitted);
		pushing_a_to_b(&lst_a, &lst_b);
		pushing_b_to_a(&lst_a, &lst_b);
		while (i < ft_lstsize(lst_a))
		{
			ft_printf("Node's Content = %d\tNode's Index = %d\n", lst_a->content, lst_a->index);
			lst_a = lst_a->next;
			i++;
		}
		// system("leaks push_swap");
	}
	else
		exit (0);
}
