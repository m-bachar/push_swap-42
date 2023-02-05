/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 14:26:40 by mbachar           #+#    #+#             */
/*   Updated: 2023/02/05 18:05:48 by mbachar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "./ft_printf/ft_printf.h"

typedef struct s_list
{
	char	**args;
}	t_list;

/*	libft_utils.c	*/
void	*ft_memcpy(void *dst, void *src, size_t n);
int		ft_strcmp(char	*s1, char	*s2);
size_t	ft_strlen(char *str);
char	*ft_strdup(char *s1);

/*	itoa_atoi.c	*/
int		ft_atoi(char *str);
char	*ft_itoa(int n);

/*	utils.c	*/
int		ft_isdigit(char **str);
int		ft_isint(char *str);

/*	errors.c	*/
void	ft_errors(char *str);
void	reset(void);
void	red(void);

#endif