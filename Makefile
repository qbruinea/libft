NAME = libft.a

HEADER = libft.h

SRC = ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c \
./ft_isdigit.c ./ft_isprint.c ./ft_itoa.c ./ft_memccpy.c ./ft_memchr.c ./ft_memcmp.c \
./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_split.c ./ft_strchr.c ./ft_strdup.c \
./ft_strjoin.c ./ft_strlcat.c ./ft_strlcpy.c ./ft_strlen.c ./ft_strncmp.c ./ft_strnstr.c \
./ft_strrchr.c ./ft_strtrim.c ./ft_substr.c ./ft_tolower.c ./ft_toupper.c ./ft_putchar_fd.c \
./ft_putstr_fd.c ./ft_putnbr_fd.c ./ft_putendl_fd.c ./ft_strmapi.c \

SRCB = ./ft_lstadd_front.c ./ft_lstiter.c ./ft_lstadd_back.c \
./ft_lstnew.c ./ft_lstsize.c ./ft_lstdelone.c ./ft_lstlast.c \
./ft_lstclear.c ./ft_lstmap.c

OBJET = $(SRC:.c=.o)

OBJETB = $(SRCB:.c=.o)

FLAG = -Wall -Wextra -Werror

%.o: %.c $(HEADER)
	gcc $(FLAG) -c $< -o $(<:.c=.o)

$(NAME): $(OBJET)
	ar rc $(NAME) $(OBJET)
	ranlib $(NAME)

all: $(NAME)

bonus: $(OBJET) $(OBJETB)
	ar rc $(NAME) $(OBJETB)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OBJET) $(OBJETB)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re