/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:40 by mbachar           #+#    #+#             */
/*   Updated: 2023/03/13 12:02:24 by mbachar          ###   ########.fr       */
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
	int				index;
	struct s_list	*next;
	struct s_list	*prev;
}	t_list;

/* ./misc/free_all.c */
void	free_all(t_list *lst_a, char **argv, int size_a);

/* ./misc/lst.c */
t_list	*ft_lstnew(int content);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);

/*	./misc/libft_utils.c	*/
int		ft_strcmp(char	*s1, char	*s2);

/*	./misc/utils.c	*/
int		ft_isempty(char **str);
char	**ft_single_arg(char **str);
int		ft_isnumber(char **str);
int		ft_isint(char *str);
int		ft_isdup(char **str);

/*	./misc/errors.c	*/
void	ft_errors(char *str);
void	ft_success(char *str);
void	reset(void);
void	red(void);

/*	./misc/parsing.c	*/
void	ft_handle_errors(char **argv);

/* ./instructions/swap.c */
void	sa(t_list *lst, int status);
void	sb(t_list *lst, int status);
void	ss(t_list *lst_a, t_list *lst_b, int status);

/* ./instructions/rotate.c */
void	ra(t_list **lst, int status);
void	rb(t_list **lst, int status);
void	rr(t_list **lst_a, t_list **lst_b, int status);

/* ./instructions/reverse_rotate.c */
void	rra(t_list **lst, int status);
void	rrb(t_list **lst, int status);
void	rrr(t_list **lst_a, t_list **lst_b, int status);

/* ./instructions/push.c */
void	pa(t_list **lst_a, t_list **lst_b);
void	pb(t_list **lst_a, t_list **lst_b);

/* ./algo/sorting.c */
void	indexing(t_list *lst_a);

#endif