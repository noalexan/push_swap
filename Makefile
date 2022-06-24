# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/06/24 15:54:23 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


CC		:= gcc
CFLAGS	:=
OFLAGS	:= -Werror -Wextra -Wall

NAME	:= push_swap

SRCS	:=	srcs/way.c \
			srcs/get.c \
			srcs/main.c \
			srcs/push.c \
			srcs/sort.c \
			srcs/parse.c \
			srcs/groups.c \
			srcs/rotate.c \
			srcs/special_3.c \
			srcs/special_5.c \

OBJS	:= $(SRCS:.c=.o)

LIBS	:=	srcs/libft/libft.a \
			srcs/get_next_line/libGNL.a \
			srcs/ft_printf/libftprintf.a \

INCL	:=	includes/libft.h \
			includes/ft_printf.h \
			includes/push_swap.h \
			includes/get_next_line.h \

GREEN	:= "\033[0m\033[1;32m"
CYAN	:= "\033[0m\033[1;36m"
YELLOW	:= "\033[0m\033[1;33m\033[3;33m"
RESET	:= "\033[0m"

RM		:= rm -rf

TEST    := 100

.c.o: $(SRCS)
	@printf $(GREEN)"\r\033[KCompiling objects... "$(YELLOW)"<$<> "$(RESET)"⏳ "
	@$(CC) $(OFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@printf $(GREEN)"\r\033[KObjects compiled succesfully ✅\n"$(RESET)
	@make -C srcs/libft
	@make -C srcs/ft_printf
	@make -C srcs/get_next_line
	@printf $(CYAN)"\r\033[KCompiling '$(NAME)'... ⏳"$(RESET)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -I include/ -o $(NAME)
	@printf $(GREEN)"\r\033[KSuccess compiling '$(NAME)' ✅\n"$(RESET)

visualizer: $(NAME) pyviz.py
	@printf $(GREEN)"\r\033[KLaunching python visualizer... ⏳"$(RESET)
	@python3 pyviz.py `ruby -e "puts (1..$(TEST)).to_a.shuffle.join(' ')"`
	@printf $(GREEN)"\r\033[KPython visualizer launched succesfully ✅\n"$(RESET)

all: $(NAME)

load:
	@printf '\r █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 0%%\r'
	@sleep .01
	@printf '\r ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 5%%\r'
	@sleep .01
	@printf '\r ███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 10%%\r'
	@sleep .01
	@printf '\r ████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 15%%\r'
	@sleep .01
	@printf '\r █████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 20%%\r'
	@sleep .01
	@printf '\r ██████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 25%%\r'
	@sleep .01
	@printf '\r ███████▒▒▒▒▒▒▒▒▒▒▒▒▒▒ - 30%%\r'
	@sleep .01
	@printf '\r ████████▒▒▒▒▒▒▒▒▒▒▒▒▒ - 35%%\r'
	@sleep .01
	@printf '\r █████████▒▒▒▒▒▒▒▒▒▒▒▒ - 40%%\r'
	@sleep .01
	@printf '\r ██████████▒▒▒▒▒▒▒▒▒▒▒ - 45%%\r'
	@sleep .01
	@printf '\r ███████████▒▒▒▒▒▒▒▒▒▒ - 50%%\r'
	@sleep .01
	@printf '\r ████████████▒▒▒▒▒▒▒▒▒ - 55%%\r'
	@sleep .01
	@printf '\r █████████████▒▒▒▒▒▒▒▒ - 60%%\r'
	@sleep .01
	@printf '\r ██████████████▒▒▒▒▒▒▒ - 65%%\r'
	@sleep .01
	@printf '\r ███████████████▒▒▒▒▒▒ - 70%%\r'
	@sleep .01
	@printf '\r ████████████████▒▒▒▒▒ - 75%%\r'
	@sleep .01
	@printf '\r █████████████████▒▒▒▒ - 80%%\r'
	@sleep .01
	@printf '\r ██████████████████▒▒▒ - 85%%\r'
	@sleep .01
	@printf '\r ███████████████████▒▒ - 90%%\r'
	@sleep .01
	@printf '\r ████████████████████▒ - 95%%\r'
	@sleep .01
	@printf '\r █████████████████████ - 100%% \r'
	@sleep .08

clean:
	@printf $(CYAN)"\r\033[KErasing objects... "$(RESET)"⏳ "
	@$(RM) $(OBJS)
	@make -C srcs/libft fclean
	@make -C srcs/ft_printf fclean
	@make -C srcs/get_next_line fclean
	@printf $(GREEN)"\r\033[Kcleaned 🗑\n"$(RESET)

fclean:
	@printf $(CYAN)"\r\033[KErasing objects... "$(RESET)"⏳ "
	@$(RM) $(OBJS)
	@make -C srcs/libft fclean
	@make -C srcs/ft_printf fclean
	@make -C srcs/get_next_line fclean
	@printf $(CYAN)"\r\033[KErasing binary file... "$(RESET)"⏳ "
	@$(RM) $(NAME) test_parser
	@printf $(GREEN)"\r\033[KForce cleaned 🗑\n"$(RESET)

re: fclean all

.PHONY: all clean fclean re
