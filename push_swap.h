/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:40 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/06 11:01:43 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./ft_printf/ft_printf.h"
# include "./libft/libft.h"

typedef struct s_list
{
	int				content;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

/* free_all.c */
void	free_all(t_list *lst_a, char **argv, int size_a);

/* lst.c */
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);

/*	libft_utils.c	*/
int		ft_strcmp(char	*s1, char	*s2);

/*	utils.c	*/
int		ft_isempty(char **str);
char	**ft_single_arg(char **str);
int		ft_isnumber(char **str);
int		ft_isint(char *str);
int		ft_isdup(char **str);

/*	errors.c	*/
void	ft_errors(char *str);
void	ft_success(char *str);
void	reset(void);
void	red(void);

/*	parsing.c	*/
void	ft_handle_errors(char **argv);

/* swap.c */
void	sa(t_list *lst, int status);
void	sb(t_list *lst, int status);
void	ss(t_list *lst_a, t_list *lst_b, int status);

/* rotate.c */
void	ra(t_list **lst, int status);
void	rb(t_list **lst, int status);
void	rr(t_list **lst_a, t_list **lst_b, int status);

/* reverse_rotate.c */
void	rra(t_list **lst, int status);
void	rrb(t_list **lst, int status);
void	rrr(t_list **lst_a, t_list **lst_b, int status);

/* push.c */
void	pa(t_list **lst_a, t_list **lst_b);
void	pb(t_list **lst_a, t_list **lst_b);

#endif