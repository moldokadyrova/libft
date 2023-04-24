# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emoldoka <emoldoka@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/23 14:10:25 by emoldoka          #+#    #+#              #
#    Updated: 2023/04/23 14:11:17 by emoldoka         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

CC			= cc
RM			= rm -f
CFLAGS		= -Wall -Wextra -Werror

OBJS		= $(SRCS:.c=.o)

SRCS		=	ft_isalpha.c \
				ft_bzero.c \
				ft_isdigit.c \
				ft_isalnum.c \
				ft_isascii.c \
				ft_isprint.c \
				ft_strlen.c \
				ft_memset.c \
				ft_tolower.c \
				ft_toupper.c \
				ft_memcpy.c \
				ft_atoi.c \
				ft_strlcpy.c \
				ft_strlcat.c \
				ft_memcmp.c \
				ft_strncmp.c \
				ft_calloc.c \
				ft_substr.c \
				ft_strjoin.c \
				ft_strdup.c \
				ft_strtrim.c \
				ft_strchr.c \
				ft_memmove.c \
				ft_strrchr.c \
				ft_memchr.c \
				ft_strnstr.c \
				ft_itoa.c \
				ft_split.c \
				ft_strmapi.c \
				ft_striteri.c \
				ft_putchar_fd.c \
				ft_putstr_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c

all:		$(NAME)

$(NAME):	$(OBJS)
	ar rcs $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)

fclean:		clean
	$(RM) $(NAME)

re:			fclean $(NAME)

.PHONY:		all clean fclean re