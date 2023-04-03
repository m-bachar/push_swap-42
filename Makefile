# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/05 14:36:47 by mbachar           #+#    #+#              #
#    Updated: 2023/04/03 01:12:01 by mbachar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

PUSH_SWAP 	= 	push_swap

CFLAGS		=	-Wall -Wextra -Werror

INC 		= 	push_swap.h

CC			=	cc

PRINTF		=	./ft_printf/libftprintf.a

LIBFT		=	./libft/libft.a

MAN_SRC 	= 	push_swap.c \
				misc/errors.c \
				misc/libft_utils.c \
				misc/utils.c \
				misc/parsing.c \
				misc/lst.c \
				misc/free_all.c \
				instructions/swap.c \
				instructions/rotate.c \
				instructions/reverse_rotate.c \
				instructions/push.c \
				chunks/push_to_b.c \
				chunks/push_to_a.c \
				chunks/indexing.c \
				chunks/sorting.c \
				chunks/sorting2.c

MAN_OBJ		=	$(MAN_SRC:.c=.o)

#CHECKER	= 	checker

#BON_SRC 	= 	checker.c

all: $(PUSH_SWAP) #$(CHECKER)

%.o : %.c $(INC)
	@ $(CC) $(CFLAGS) -c $< -o $@

$(PUSH_SWAP): $(MAN_OBJ)
	@ cd ./libft && make
	@ cd ./ft_printf && make
	@ $(CC) $(CFLAGS) $(MAN_OBJ) -o $(PUSH_SWAP) $(PRINTF) $(LIBFT)
	@ printf "===============================================\n"
	@ printf "All mandatory source files have been compiled.\n"
	@ printf "Executable file push_swap has been generated.\n"
	@ printf "===============================================\n"

clean:
	@ rm -fr $(MAN_OBJ)
	@ cd ./libft && make clean
	@ cd ./ft_printf && make clean
	@ printf "===============================================\n"
	@ printf "All object files have been destroyed.\n"
	@ printf "===============================================\n"

fclean:
	@ rm -fr $(PUSH_SWAP) $(MAN_OBJ)
	@ cd ./libft && make fclean
	@ cd ./ft_printf && make fclean
	@ printf "=========================================================\n"
	@ printf "All object files and executable file have been destroyed.\n"
	@ printf "==========================================================\n"

re: fclean all

.PHONY: fclean clean re bonus