# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 14:36:47 by mbachar           #+#    #+#              #
#    Updated: 2023/02/27 18:35:48 by mbachar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP 	= 	push_swap

CFLAGS		=	-Wall -Wextra -Werror

INC 		= 	push_swap.h

CC			=	cc

PRINTF		=	./ft_printf/libftprintf.a

LIBFT		=	./libft/libft.a

MAN_SRC 	= 	push_swap.c ./misc/errors.c ./misc/libft_utils.c ./misc/utils.c ./misc/parsing.c ./misc/lst.c ./misc/free_all.c ./instructions/swap.c \

MAN_OBJ		=	$(MAN_SRC:.c=.o)

#CHECKER	= 	checker

#BON_SRC 	= 	checker.c

all: $(PUSH_SWAP) #$(CHECKER)

%.o : %.c $(INC)
	@ $(CC) $(CFLAGS) -c $< -o $@

$(PUSH_SWAP): $(MAN_OBJ)
	@ $(CC) $(CFLAGS) $(MAN_OBJ) -o $(PUSH_SWAP) $(PRINTF) $(LIBFT)
	@ printf "===============================================\n"
	@ printf "All mandatory source files have been compiled.\n"
	@ printf "Executable file push_swap has been generated.\n"
	@ printf "===============================================\n"

clean:
	@ rm -fr $(MAN_OBJ)
	@ printf "===============================================\n"
	@ printf "All object files have been destroyed.\n"
	@ printf "===============================================\n"

fclean:
	@ rm -fr $(PUSH_SWAP) $(MAN_OBJ)
	@ printf "=========================================================\n"
	@ printf "All object files and executable file have been destroyed.\n"
	@ printf "==========================================================\n"

re: fclean all

.PHONY: fclean clean re bonus