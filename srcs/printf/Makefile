# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/05/09 14:01:48 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= gcc
CFLAGS	:= -Werror -Wextra -Wall

NAME	:= printf.a

SRCS	:=	ft_printf.c \
			ft_printf_utils.c \

OBJS	:= $(SRCS:.c=.o)

GREEN	:= "\033[0;32m"
CYAN	:= "\033[0;36m"
YELLOW	:= "\033[0;33m"
RESET	:= "\033[0m"

RM		:= rm -rf
AR		:= ar rcs

.c.o:
	@printf $(GREEN)"\r\033[K[Compiling printf... "$(YELLOW)"<$<>"$(GREEN)" ]"$(RESET)
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(OBJS)
	@printf $(CYAN)"\r\033[K[Compiling '$(NAME)'...]"$(RESET)
	@$(AR) $(NAME) $(OBJS)
	@printf $(GREEN)"\r\033[KSuccess compiling '$(NAME)'"$(RESET)

all: $(NAME)

clean:
	@printf $(CYAN)"\r\033[K[Erasing printf...]"$(RESET)
	@$(RM) $(OBJS)

fclean: clean
	@printf $(CYAN)"\r\033[K[Erasing $(NAME)...]"$(RESET)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
