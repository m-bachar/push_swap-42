/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/27 19:41:03 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	leaks(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	char		**splitted;
	t_list		*lst_a;
	int			size;
	int			i;

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
		i = 0;
		printf("\n============= Before SA ==================\n");
		while (i < size)
		{
			printf("%d ", lst_a->content);
			lst_a = lst_a->next;
			i++;
		}
		printf("\n===========================================\n");
		sa(lst_a);
		i = 0;
		printf("\n============= After SA ====================\n");
		while (i < size)
		{
			printf("%d ", lst_a->content);
			lst_a = lst_a->next;
			i++;
		}
		printf("\n===========================================\n\n");
		free_all(lst_a, splitted, size);
	}
	else
		exit (0);
}
