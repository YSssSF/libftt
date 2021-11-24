# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-aoun <yel-aoun@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/10 21:22:25 by yel-aoun          #+#    #+#              #
#    Updated: 2021/11/22 18:23:44 by yel-aoun         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_bzero.c  ft_isascii.c ft_memchr.c  ft_memmove.c ft_strlcat.c ft_strncmp.c ft_tolower.c \
ft_isalnum.c ft_isdigit.c ft_memcmp.c  ft_memset.c  ft_strlcpy.c ft_strnstr.c ft_toupper.c \
ft_atoi.c    ft_isalpha.c ft_isprint.c ft_memcpy.c  ft_strchr.c  ft_strlen.c  ft_strrchr.c \
ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c \
ft_putchar_fd.c ft_strmapi.c ft_striteri.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS_SRCS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
HDRS = libft.h
NAME = libft.a
RM = rm -f
CC = gcc
ARG = -c
FLAGS = -Wall -Wextra -Werror
$(NAME):	$(OBJS)
		ar rcs $(NAME) $(OBJS)
all:	$(NAME)
bonus:	$(OBJS) $(BONUS_OBJS)
		ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
re:	fclean all
clean:
		$(RM) $(OBJS) $(BONUS_OBJS)
fclean: clean
		$(RM) $(NAME)
.PHONY: all clean fclean re bonus
