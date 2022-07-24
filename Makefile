NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_nbrlen.c ft_printf.c ft_put_nbrun.c ft_putchar_fd.c ft_puthex_fd.c \
		ft_puthexlower.c ft_putnbr_fd.c ft_putstr_fd.c ft_puthexupper.c
OBJS = ${SRCS:.c=.o}
RM = rm -rf
AR = ar -rcs

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

.c .o: ${SRCS}
	${CC} ${CFLAGS} ${SRCS} -I ./

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re