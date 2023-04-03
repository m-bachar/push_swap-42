/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:40 by mbachar           #+#    #+#             */
/*   Updated: 2023/04/03 02:00:54 by mbachar          ###   ########.fr       */
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

			/* Chunks */
/*	./chunks/sorting.c	*/
void	sort_2(t_list **lst_a);
void	sort_3(t_list **lst_a);
void	sort_4(t_list **lst_a, t_list **lst_b);
void	sort_5(t_list **lst_a, t_list **lst_b);
void	sort_100_and_500(t_list **lst_a, t_list **lst_b);

/*	./chunks/sorting2.c	*/
int		find_min(t_list **lst_a, int half_chunk, int index);
void	push_1_to_b(t_list **lst_a, t_list **lst_b);
void	push_2_to_b(t_list **lst_a, t_list **lst_b);
void	sort_2_3_4(t_list **lst_a, t_list **lst_b);

/* ./chunks/indexing.c */
void	indexing(t_list **lst_a);

/* ./chunks/push_to_b.c */
void	push_to_b(t_list **lst_a, t_list **lst_b);

/* ./chunks/push_to_a.c */
void	push_to_a(t_list **lst_a, t_list **lst_b);
int		find_max(t_list **lst_b, int half_chunk, int index);

			/* Instructions */
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

			/* Misc */
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
void	reset(void);
void	red(void);

/*	./misc/parsing.c	*/
void	ft_handle_errors(char **argv);

			/*	push_swap.c	*/
void	filling_stack_a(t_list **lst_a, char **splitted);
void	pushing_a_to_b(t_list **lst_a, t_list **lst_b);
void	pushing_b_to_a(t_list **lst_a, t_list **lst_b);
int		already_sorted(t_list **lst_a);

#endif