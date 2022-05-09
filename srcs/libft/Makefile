# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: noalexan <noalexan@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/24 13:22:13 by noalexan          #+#    #+#              #
#    Updated: 2022/05/09 14:01:38 by noalexan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:= gcc
CFLAGS	:= -Werror -Wextra -Wall

NAME	:= libft.a

SRCS	:=	ft_atoi.c \
			ft_calloc.c \
			ft_foreach.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_memchr.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlen.c \
			ft_strnstr.c \
			ft_substr.c \
			ft_toupper.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memcmp.c  \
			ft_memmove.c \
			ft_strchr.c \
			ft_strjoin.c \
			ft_strlcpy.c \
			ft_strcmp.c \
			ft_strncmp.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstlast.c \
			ft_lst_before_last.c \
			ft_lstclear.c \
			ft_lstiter.c \

OBJS	:= $(SRCS:.c=.o)

GREEN	:= "\033[0;32m"
CYAN	:= "\033[0;36m"
YELLOW	:= "\033[0;33m"
RESET	:= "\033[0m"

RM		:= rm -rf
AR		:= ar rcs

.c.o:
	@printf $(GREEN)"\r\033[K[Compiling libft... "$(YELLOW)"<$<>"$(GREEN)" ]"$(RESET)
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I.

$(NAME): $(OBJS)
	@printf $(CYAN)"\r\033[K[Compiling '$(NAME)'...]"$(RESET)
	@$(AR) $(NAME) $(OBJS)
	@printf $(GREEN)"\r\033[KSuccess compiling '$(NAME)'"$(RESET)

all: $(NAME)

clean:
	@printf $(CYAN)"\r\033[K[Erasing libft...]"$(RESET)
	@$(RM) $(OBJS)

fclean: clean
	@printf $(CYAN)"\r\033[K[Erasing $(NAME)...]"$(RESET)
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
