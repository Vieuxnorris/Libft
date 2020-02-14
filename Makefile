# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jwins <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/02/12 18:08:20 by jwins             #+#    #+#              #
#    Updated: 2020/02/14 15:08:11 by jwins            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi.c ft_isalpha.c ft_memccpy.c ft_memmove.c ft_strlcat.c ft_strnstr.c \
				ft_bzero.c ft_isascii.c ft_memchr.c ft_memset.c ft_strlcpy.c ft_strrchr.c \
				ft_calloc.c ft_isdigit.c ft_memcmp.c ft_strchr.c ft_strlen.c ft_tolower.c \
				ft_isalnum.c ft_isprint.c ft_memcpy.c ft_strdup.c ft_strncmp.c ft_toupper.c \
				ft_substr.c ft_strjoin.c ft_strtrim.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_split.c ft_itoa.c ft_strcat.c \
				ft_strcpy.c ft_strncpy.c ft_strndup.c \

SRCS_B 		= 	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c 				\
			  	ft_lstadd_back.c ft_lstlast.c ft_lstdelone.c 				\
			  	ft_lstiter.c ft_lstclear.c ft_lstmap.c
CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -c
RM			=	rm -f
NORM		=	norminette *.h && norminette *.c 

OBJS		=	$(SRCS:%.c=%.o)

OBJS_B		=	$(SRCS_B:%.c=%.o)

all			:	$(NAME)

$(NAME) 	:	$(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS) 	:	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

$(OBJS_B) 	:	$(SRCS_B)
	$(CC) $(CFLAGS) $(SRCS_B)

n			:
	$(NORM)

bonus 		:	fclean $(OBJS) $(OBJS_B)
	ar rc $(NAME) $(OBJS) $(OBJS_B)

clean		: 
	$(RM) $(OBJS) $(OBJS_B)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
