# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/05/09 14:05:14 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= gcc
OFLAGS	:= -Werror -Wextra -Wall -g

NAME	:= push_swap

SRCS	:=	srcs/main.c \
			srcs/swap.c \
			srcs/push.c \
			srcs/sort.c \
			srcs/order.c \
			srcs/utils.c \
			srcs/rotate.c \
			srcs/get_next_line/get_next_line.c \
			srcs/get_next_line/get_next_line_utils.c \

OBJS	:= $(SRCS:.c=.o)

LIBS	:=	srcs/libft/libft.a \
			srcs/printf/printf.a \

RM		:= rm -rf
AR		:= ar rcs

GREEN	:= "\033[0;32m"
CYAN	:= "\033[0;36m"
YELLOW	:= "\033[0;33m"
RESET	:= "\033[0m"

TEST	:= 300

.c.o: $(SRCS)
	@printf $(GREEN)"\r\033[K[Compiling objects... "$(YELLOW)"<$<>"$(GREEN)" ]"$(RESET)
	@$(CC) $(OFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	@make -C srcs/libft
	@make -C srcs/printf
	@printf $(CYAN)"\r\033[K[Compiling '$(NAME)'...]"$(RESET)
	@$(CC) $(CFLAGS) $(OBJS) $(LIBS) -I include/ -o $(NAME)
	@printf $(GREEN)"\r\033[KSuccess compiling '$(NAME)'\n"$(RESET)

visualizer: all
	@python3 pyviz.py `ruby -e "puts (1..$(TEST)).to_a.shuffle.join(' ')"`

all: $(NAME)
# @printf '\r █▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ██▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ████▒▒▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r █████▒▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ██████▒▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ███████▒▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ████████▒▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r █████████▒▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ██████████▒▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ███████████▒▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ████████████▒▒▒▒▒▒\r'
# @sleep .1
# @printf '\r █████████████▒▒▒▒▒\r'
# @sleep .1
# @printf '\r ██████████████▒▒▒▒\r'
# @sleep .1
# @printf '\r ███████████████▒▒▒\r'
# @sleep .1
# @printf '\r ████████████████▒▒\r'
# @sleep .1
# @printf '\r █████████████████▒\r'
# @sleep .1
# @printf '\r ██████████████████\r'
# @sleep .1

clean:
	@printf $(CYAN)"\r\033[K[Erasing objects...]"$(RESET)
	@$(RM) $(OBJS)
	@make -C srcs/libft fclean
	@make -C srcs/printf fclean

fclean: clean
	@printf $(CYAN)"\r\033[K[Erasing binary file...]"$(RESET)
	@$(RM) $(NAME) test_parser

re: fclean all

.PHONY: all clean fclean re
