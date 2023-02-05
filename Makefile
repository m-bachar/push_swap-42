# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 14:36:47 by mbachar           #+#    #+#              #
#    Updated: 2023/02/05 14:51:23 by mbachar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP 	= 	push_swap

CHECKER		= 	checker

MAN_SRC 	= 	push_swap.c \
				utils.c

BON_SRC 	= 	checker.c

INC 		= 	push_swap.h

CC			=	cc

CFLAGS		=	-Wall -Wextra -Werror

all: $(PUSH_SWAP) $(CHECKER)

