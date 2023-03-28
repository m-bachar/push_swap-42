/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/28 00:37:46 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	leaks(void)
{
	system("leaks push_swap");
}

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
	t_list		*lst_aa;
	t_list		*lst_b;

	// leaks();
	i = 0;
	if (argc > 1)
	{
		if (!ft_isempty(argv))
			ft_errors("One of the arguments has only blank spaces");
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
		filling_stack_a(&lst_a, splitted);
		pushing_a_to_b(&lst_a, &lst_b);
		pushing_b_to_a(&lst_aa, &lst_b);
		ft_printf("===========================================\n");
		while (i++ < ft_lstsize(lst_aa))
		{
			ft_printf("Node's Content = %d\tNode's Index = %d\n", lst_aa->content, lst_aa->index);
			lst_aa = lst_aa->next;
		}
		ft_printf("===========================================\n");
		// ft_printf("Node's Content = %d\t Node's Index = %d\n", lst_aa->content, lst_aa->index);
		// system("leaks push_swap");
	}
	else
		exit (0);
}
