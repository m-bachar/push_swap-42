# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbachar <mbachar@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/22 08:33:19 by mbachar           #+#    #+#              #
#    Updated: 2023/01/01 12:44:02 by mbachar          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
INCLUDE = libft.h
SRC_MANDATORY = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
		ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c \

OBJ_MANDATORY = $(SRC_MANDATORY:.c=.o)

SRC_BONUS = ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstadd_back.c ft_lstadd_front.c ft_lstdelone.c \
			ft_lstiter.c ft_lstclear.c \

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

CC = cc

all: $(NAME)

%.o: %.c $(INCLUDE)
	@ $(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ_MANDATORY)
	@ ar -r $@ $(OBJ_MANDATORY)
	@ printf "All mandatory source files have been compiled.\n"
	@ printf "Archive file libft.a has been generated.\n"

bonus: $(OBJ_BONUS) $(OBJ_MANDATORY)
	@ ar -r $(NAME) $(OBJ_BONUS) $(OBJ_MANDATORY)
	@ printf "All bonus source files have been compiled.\n"
	@ printf "Archive file libft.a has been generated.\n"

clean:
	@ rm -f $(OBJ_MANDATORY) $(OBJ_BONUS)
	@ printf "All object files have been destroyed.\n"

fclean:
	@ rm -fr $(OBJ_MANDATORY) $(OBJ_BONUS)
	@ rm -fr $(NAME)
	@ printf "All object files and executable file have been destroyed.\n"

re: fclean all

.PHONY: fclean clean re bonus