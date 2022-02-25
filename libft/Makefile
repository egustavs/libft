# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egustavs <marvin@42lausanne.ch>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/03 16:52:20 by egustavs          #+#    #+#              #
#    Updated: 2021/11/03 18:00:45 by egustavs         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f
CC		= gcc
AR		= ar rcs

FILES	= ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_strlen.c \
		ft_atoi.c \
		ft_strncmp.c \
		ft_memcmp.c \
		ft_itoa.c \
		ft_strdup.c \
		ft_strchr.c \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_substr.c \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_strmapi.c \
		ft_split.c \
		ft_calloc.c \
		ft_memchr.c \
		ft_memset.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_bzero.c \
		ft_striteri.c \
		ft_putchar_fd.c \
		ft_putstr_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_strlcpy.c \
		ft_strlcat.c \

OBJS	= $(FILES:.c=.o)
.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
		$(AR) $(NAME) $(OBJS)

all:	$(NAME)
clean:
		$(RM) $(OBJS)
	
fclean: clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
