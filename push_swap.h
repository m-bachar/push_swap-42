/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:40 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/06 22:50:28 by mbachar          ###   ########.fr       */
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
	char	**args;
}	t_list;

/*	libft_utils.c	*/
int		ft_strcmp(char	*s1, char	*s2);

/*	utils.c	*/
int		ft_isnumber(char **str);
int		ft_isint(char *str);
int		ft_isdup(char **str);
char	**ft_single_arg(char **str);

/*	errors.c	*/
void	ft_errors(char *str);
void	ft_success(char *str);
void	reset(void);
void	red(void);

/*	parsing.c	*/
void	ft_handle_errors(char **argv);

#endif