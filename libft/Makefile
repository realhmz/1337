NAME = libft.a
CFLAGS = -Werror -Wextra -Wall -std=c99

CC = cc

INC = libft.h

SRCS =	ft_strlen.c\
		ft_toupper.c\
		ft_tolower.c\
		ft_atoi.c\
		ft_isprint.c\
		ft_isascii.c\
		ft_isdigit.c\
		ft_isalpha.c\
		ft_isalnum.c\
		ft_strdup.c\
		ft_strcmp.c\

OBJS = $(SRCS:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJS)
		ar rc $(NAME) $(OBJS)

%.o : %.c $(INC)
		$(CC) -c $(CFLAGS) $< -o $@

clean :
		rm -rf $(OBJS)

fclean : clean 
		rm -rf $(NAME)

re : fclean all