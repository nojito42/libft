# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nojito <nojito@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/27 22:14:42 by nojito            #+#    #+#              #
#    Updated: 2023/10/28 10:44:39 by nojito           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	ft_memset.c ft_isalpha.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
	ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

OBJS	= ${SRCS:.c=.o}

NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS 	= -Wall -Wextra -Werror

all:		${NAME}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

clean:  
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all