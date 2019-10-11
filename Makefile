CC = gcc

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

SOURCES = ft_atoi.c\
			ft_bzero.c\
			ft_calloc.c\
			ft_isalnum.c\
			ft_isalpha.c\
			ft_isascii.c\
			ft_isdigit.c\
			ft_isprint.c\
			ft_memccpy.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_memset.c\
			ft_strchr.c\
			ft_strdup.c\
			ft_strlcat.c\
			ft_strcpy.c\
			ft_strlen.c\
			ft_strnstr.c\
			ft_strrchr.c\
			ft_tolower.c\
			ft_toupper.c\

HEADERS = libft.h

OBJECT = $(SOURCES:.c=.o);

$(NAME):
		@$(CC) $(FLAGS) -c $(SOURCES)
		@ar rc $(NAME) $(OBJECT)
		@ranlib $(NAME)
		@echo "\033[1;34mLibft\t\t\033[1;33mCompilation\t\033[0;32m[OK]\033[0m"

all: $(NAME)

clean:
		@rm -rf $(OBJECT)
		@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

fclean: clean
		@rm -fr $(NAME)
		@echo "\033[1;34mLibft\t\t\033[1;33mCleaning obj\t\033[0;32m[OK]\033[0m"

re: fclean all

.PHONY : clean fclean
