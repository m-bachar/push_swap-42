/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 16:42:49 by mbachar           #+#    #+#             */
/*   Updated: 2023/01/01 09:51:01 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	first = *lst;
	new->next = first;
	*lst = new;
}
