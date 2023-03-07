/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                    		    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 18:04:08 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/25 22:15:37 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

t_list	*ft_lstnew(int content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (free(node), NULL);
	node->content = content;
	node->next = node;
	node->prev = node;
	return (node);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	t_list	*first;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	first = *lst;
	while (last->next != *lst)
		last = last->next;
	last->next = new;
	new->next = *lst;
	new->prev = last;
	first->prev = new;
}

int	ft_lstsize(t_list *lst)
{
	t_list	*ptr;
	int		i;

	i = 1;
	if (lst == NULL)
		return (0);
	ptr = lst;
	while (ptr->next != lst)
	{
		ptr = ptr->next;
		i++;
	}
	return (i);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*first;
	t_list	*last;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	first = *lst;
	last = *lst;
	while (last->next != *lst)
		last = last->next;
	new->next = first;
	new->prev = last;
	last->next = new;
	first->prev = new;
	*lst = new;
}
