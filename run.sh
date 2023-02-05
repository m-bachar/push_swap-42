#!/bin/bash

rm -fr push_swap
cc push_swap.c ./misc/utils.c ./misc/itoa_atoi.c ./misc/errors.c ./misc/libft_utils.c ./ft_printf/libftprintf.a -Wall -Wextra -Werror -o push_swap