# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 14:36:47 by mbachar           #+#    #+#              #
#    Updated: 2023/02/06 21:30:40 by mbachar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP 	= 	push_swap

CFLAGS		=	-Wall -Wextra -Werror

INC 		= 	push_swap.h

CC			=	cc

PRINTF		=	./ft_printf/libftprintf.a

LIBFT		=	./libft/libft.a

MAN_SRC 	= 	push_swap.c ./misc/errors.c ./misc/libft_utils.c ./misc/utils.c ./misc/parsing.c \

MAN_OBJ		=	$(MAN_SRC:.c=.o)

#CHECKER		= 	checker

#BON_SRC 	= 	checker.c

all: $(PUSH_SWAP) #$(CHECKER)

%.o : %.c $(INC)
	$(CC) $(CFLAGS) -c $< -o $@

$(PUSH_SWAP): $(MAN_OBJ)
	$(CC) $(CFLAGS) $(MAN_OBJ) -o $(PUSH_SWAP) $(PRINTF) $(LIBFT)

clean:
	rm -fr $(MAN_OBJ)

fclean: clean
	rm -fr $(PUSH_SWAP)

re: fclean all

.PHONY: fclean clean
