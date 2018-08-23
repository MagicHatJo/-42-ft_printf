# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jochang <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/10 20:03:27 by jochang           #+#    #+#              #
#    Updated: 2018/08/22 21:25:41 by jochang          ###   ########.fr        #
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

TOOL =tools/ft_putchar.c \
	  tools/ft_atoi.c \
	  tools/ft_strlen.c \
	  tools/ft_putstr.c \
	  tools/ft_isspace.c \
	  tools/ft_strndup.c \
	  tools/ft_strncpy.c \
	  tools/ft_memalloc.c \
	  tools/ft_bzero.c \
	  tools/ft_memset.c \
	  tools/ft_wcslen.c \
	  tools/ft_memcpy.c \
	  tools/ft_itoa.c \
	  tools/ft_placevalue.c \
	  tools/ft_strnew.c \
	  tools/ft_itoa_abs.c \
	  tools/ft_uitoa.c \
	  tools/ft_strrev.c \
	  tools/ft_itoh.c \
	  tools/ft_upval.c \
	  tools/ft_putwstr.c \
	  tools/ft_putwchar.c \
	  tools/ft_itoo.c

OBJ = *.o

INC = inc/ft_printf.h \
	  inc/macro.h \
	  inc/tools.h

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	@gcc $(CFLAGS) -c $(SRC) $(TYPE) $(TOOL) -I $(INC)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f $(OBJ)
	@rm -f inc/*.gch

fclean: clean
	@rm -f $(NAME)
	@rm -f *.a

re: fclean all
