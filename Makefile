NAME = libft.a

SRC = ft_isalnum.c ft_memchr.c ft_strchr.c ft_strlen.c ft_substr.c ft_isalpha.c ft_memcmp.c ft_strdup.c ft_strmapi.c ft_tolower.c ft_isascii.c ft_memcpy.c ft_striteri.c ft_strncmp.c  ft_toupper.c ft_atoi.c ft_isdigit.c ft_memmove.c ft_strjoin.c ft_strnstr.c ft_bzero.c ft_isprint.c ft_memset.c ft_strlcat.c ft_strrchr.c ft_calloc.c ft_itoa.c ft_split.c ft_strlcpy.c ft_strtrim.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

CC = cc
CFLAGS = -Wall -Wextra -Werror
BOTH = $(SRC) $(BONUS)
OBJS = $(SRC:.c=.o)
OBJBN = $(BOTH:.c=.o)

all : $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus : $(OBJBN)
	ar rcs $(NAME) $(OBJBN)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJBN)

fclean: clean
	rm -f $(NAME)

re: fclean all
