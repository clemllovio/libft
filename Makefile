NAME = libft.a

CC = gcc

CFLAG = -Wall -Werror -Wextra

SRCS = ft_isalpha.c\
ft_isdigit.c\
ft_isalnum.c\
ft_isascii.c\
ft_isprint.c\
ft_strlen.c\
ft_memset.c\
ft_bzero.c\
ft_memcpy.c\
ft_memmove.c\
ft_strlcpy.c\
ft_strlcat.c\
ft_toupper.c\
ft_tolower.c\
ft_strchr.c\
ft_strrchr.c\
ft_strncmp.c\
ft_memchr.c\
ft_memcmp.c\
ft_strnstr.c\
ft_atoi.c\
ft_calloc.c\
ft_strdup.c\
ft_substr.c\
ft_strjoin.c\
ft_strtrim.c\
ft_split.c\
ft_itoa.c\
ft_strmapi.c\
ft_striteri.c\
ft_putchar_fd.c\
ft_putnbr_fd.c\
ft_putendl_fd.c\
ft_putstr_fd.c \

SRCS_B = ft_lstnew_bonus.c

OBJS = ${SRCS:.c=.o}

OBJS_B = ${SRCS_B:.c=.o}

RM = rm -f

HEADERS = libft.h

all : ${NAME}

${NAME} : ${OBJS}
	ar rcs ${NAME} ${OBJS}

bonus : ${OBJS} ${OBJS_B}
	ar rcs ${NAME} ${OBJS} ${OBJS_B}

%.o : %.c ${HEADERS} Makefile
	$(CC) $(CFLAGS) -c $< -o $@;

clean :
	${RM} ${OBJS} ${OBJS_B}

fclean : clean
	${RM} ${NAME}

re : fclean all bonus

.PHONY = all clean fclean re