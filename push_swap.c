/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:22 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/25 22:38:59 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	fun(void)
{
	system("leaks push_swap");
}

int	main(int argc, char **argv)
{
	int		i;
	int		j;
	char	**splitted;
	t_list	*lst;

	// atexit(fun);
	if (argc > 1)
	{
		if (!ft_isempty(argv))
			ft_errors("One of the arguments has only blank spaces");
		splitted = ft_single_arg(argv);
		ft_handle_errors(splitted);
		i = 0;
		while (splitted[i])
			i++;
		j = 0;
		while (j < i)
			ft_lstadd_back(&lst, ft_lstnew(ft_atoi(splitted[j++])));
		j = 0;
		while (j < i)
		{
			printf("%d\n", lst->content);
			lst = lst->next;
			j++;
		}
	}
	else
		exit (0);
}
