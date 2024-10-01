# ====================== VARIABLES ====================== #

# ---- Final Executable --- #
NAME		=	libft.a

# ---- Directories ---- #
DIR_OBJS	=	.objs/

# ---- Files path ---- #
SRCS		=	ft_strlen.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_strchr.c\
				ft_strrchr.c\
				ft_strncmp.c\
				ft_strnstr.c\
				ft_strdup.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_strmapi.c\
				ft_striteri.c\
				\
				ft_isalpha.c\
				ft_isdigit.c\
				ft_isalnum.c\
				ft_isascii.c\
				ft_isprint.c\
				ft_memset.c\
				ft_bzero.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_toupper.c\
				ft_tolower.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_substr.c\
				ft_split.c\
				ft_itoa.c\
				ft_putchar_fd.c\
				ft_putnbr_fd.c\
				ft_putendl_fd.c\
				ft_putstr_fd.c

SRCS_BONUS	=	ft_lstnew_bonus.c\
				ft_lstadd_front_bonus.c\
				ft_lstsize_bonus.c\
				ft_lstlast_bonus.c\
				ft_lstadd_back_bonus.c\
				ft_lstdelone_bonus.c\
				ft_lstclear_bonus.c\
				ft_lstiter_bonus.c\
				ft_lstmap_bonus.c

HEADERS		=	libft.h

OBJS 		=	${addprefix ${DIR_OBJS},${SRCS:.c=.o}}
OBJS_B		=	${addprefix ${DIR_OBJS},${SRCS_BONUS:.c=.o}}

# ---- Flag---- #
CFLAG		=	-Wall -Werror -Wextra

# ====================== RULES ====================== #
# ---- Compiled rules ---- #
all:			${NAME}

${NAME}:		${OBJS}
				ar rcs ${NAME} ${OBJS}

${DIR_OBJS}%.o: 	%.c ${HEADERS} Makefile
					@mkdir -p ${shell dirname $@}
					$(CC) $(CFLAGS) -c $< -o $@

bonus: 			${OBJS} ${OBJS_B}
				ar rcs ${NAME} ${OBJS} ${OBJS_B}

# ---- Usual Rules ---- #
clean:
				${RM} -rf ${OBJS} ${DIR_OBJS} ${OBJS_B}

fclean: 		clean
				${RM} -f ${NAME}

re:				fclean ${NAME}

.PHONY:			all clean fclean re bonus