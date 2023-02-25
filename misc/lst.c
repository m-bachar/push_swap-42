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
	t_list	*temp;
	t_list	*head;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	temp = *lst;
	head = *lst;
	while (temp->next != *lst)
		temp = temp->next;
	temp->next = new;
	new->next = *lst;
	new->prev = temp;
	head->prev = new;
}
