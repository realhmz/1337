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
		ft_strncmp.c\
		ft_memset.c\
		ft_bzero.c\
		ft_strchr.c\
		ft_strrchr.c\
		ft_memcmp.c\
		ft_memmove.c\
		ft_memcpy.c\
		ft_memchr.c\
		ft_calloc.c\
		ft_strjoin.c\
		ft_substr.c\
		ft_strlcpy.c\
		ft_strlcat.c\
		ft_memrchr.c\
		ft_strnstr.c\
		ft_strtrim.c\
		ft_putchar_fd.c\
		ft_split.c\
		ft_itoi.c\
		ft_putstr_fd.c\

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
