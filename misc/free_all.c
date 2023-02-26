/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:49:08 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/26 17:07:24 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_all(t_list *lst, char **argv, int size)
{
	int	j;

	j = 0;
	while (j < size)
	{
		free(lst);
		lst = lst->next;
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
