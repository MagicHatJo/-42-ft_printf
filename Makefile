# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/10 20:03:27 by jochang           #+#    #+#              #
#    Updated: 2018/09/06 21:04:15 by jochang          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = src/ft_printf.c \
	  src/dispatch.c \
	  src/get_opts.c \

TYPE =type/d_s.c \
	  type/d_us.c \
	  type/d_p.c \
	  type/d_d.c \
	  type/d_ud.c \
	  type/d_o.c \
	  type/d_uo.c \
	  type/d_u.c \
	  type/d_uu.c \
	  type/d_x.c \
	  type/d_ux.c \
	  type/d_c.c \
	  type/d_uc.c \
	  type/d_percent.c \
	  type/d_b.c

TOOL =tools/pt_putchar.c \
	  tools/pt_atoi.c \
	  tools/pt_strlen.c \
	  tools/pt_putstr.c \
	  tools/pt_isspace.c \
	  tools/pt_strndup.c \
	  tools/pt_strncpy.c \
	  tools/pt_memalloc.c \
	  tools/pt_bzero.c \
	  tools/pt_memset.c \
	  tools/pt_wcslen.c \
	  tools/pt_memcpy.c \
	  tools/pt_itoa.c \
	  tools/pt_placevalue.c \
	  tools/pt_strnew.c \
	  tools/pt_itoa_abs.c \
	  tools/pt_uitoa.c \
	  tools/pt_strrev.c \
	  tools/pt_itoh.c \
	  tools/pt_upval.c \
	  tools/pt_putwstr.c \
	  tools/pt_putwchar.c \
	  tools/pt_itoo.c

OBJ = *.o

INC = inc/ft_printf.h \
	  inc/macro.h \
	  inc/tools.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@echo "\033[32mmaking libftprintf...\033[0m"
	@gcc $(CFLAGS) -c $(SRC) $(TYPE) $(TOOL) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@echo "\033[33mcleaning libftprintf repository...\033[0m"
	@rm -f $(OBJ)

fclean: clean
	@echo "\033[33mremoving libftprintf library file...\033[0m"
	@rm -f $(NAME)

re: fclean all
