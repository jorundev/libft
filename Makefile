# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hroussea <hroussea@student.42lyon.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/23 14:23:19 by hroussea          #+#    #+#              #
#    Updated: 2020/11/27 21:13:05 by hroussea         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_memset.c \
			ft_bzero.c \
			ft_memcpy.c \
			ft_memchr.c \
			ft_memccpy.c \
			ft_memmove.c \
			ft_memcmp.c \
			ft_strlen.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isspace.c \
			ft_isprint.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_strnstr.c \
			ft_atoi.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_abs.c \
			ft_strmapi.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c

BONUS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstclear.c \
			ft_lstmap.c

OBJS	=	${SRCS:.c=.o}

BOBJS	=	${BONUS:.c=.o}

CC		=	gcc

CFLAGS	=	-Wall -Wextra -Werror

NAME	=	libft.a

all:	${NAME}

$(NAME):	${OBJS}
			ar rc $@ ${OBJS}

%.o:	%.c
		${CC} ${CFLAGS} -c $< -o $@

clean:
		rm -f ${OBJS} ${BOBJS}

fclean:	clean
		rm -f ${NAME}

re: fclean all

bonus: ${OBJS} ${BOBJS}
		ar rc $(NAME) ${OBJS} ${BOBJS}

norme:
		norminette **.c **.h

.PHONY: all clean fclean re norme bonus
