/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:49:08 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/02 14:18:38 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_all(t_list *lst_a, char **argv, int size_a)
{
	int	j;

	j = 0;
	while (j < size_a)
	{
		free(lst_a);
		lst_a = lst_a->next;
		j++;
	}
	j = 0;
	while (argv[j])
	{
		free(argv[j]);
		j++;
	}
	free(argv);
}
