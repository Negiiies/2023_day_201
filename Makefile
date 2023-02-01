# E89 Pedagogical & Technical Lab
# project:     2022_rev
# created on:  2022-11-22 - 11:19 +0100
# 1st author:  dylan.le - dylan.le
# description: Makefile

NAME	=	libstu.a

NAME_TEST = 	test.out

SRCS	=	src/stu_strlen.c		\
		src/is_num.c			\
		src/is_alpha.c			\
		src/stu_strcpy.c		\
		src/stu_strcmp.c		\
		src/stu_strdup.c		\
		src/swap_int.c			\
		src/stu_puts.c			\
		src/atoi.c			\
		src/stu_strncpy.c		\
		src/stu_strndup.c		\
		src/stu_strchr.c		\
		src/stu_strcat.c

SRCS_TEST =	test/test_stu_strlen.c		\
		test/test_is_num.c		\
		test/test_is_alpha.c		\
		test/test_stu_strcpy.c		\
		test/test_stu_strcmp.c		\
		test/test_stu_strdup.c		\
		test/test_swap_int.c		\
		test/test_stu_strncpy.c		\
		test/test_stu_strndup.c		\
		test/test_stu_strchr.c		\
		test/test_atoi.c		\
		test/test_stu_strcat.c

OBJS		=	$(SRCS:.c=.o)

OBJS_TEST	=	$(SRCS_TEST:.c=.o)

CFLAGS	+=	-W -Wall -Wextra -Werror -Iinclude/

LDFLAGS	+=

RM	=	rm -vf

CC	:=	gcc

ifdef RELEASE
CFLAGS += -O2
endif

ifdef DEBUG
CFLAGS += -g
endif

all: $(NAME_TEST)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(LDFLAGS) -o ar rc $(NAME)

$(NAME_TEST): $(OBJS) $(OBJS_TEST)
	$(CC) -o $(NAME_TEST) $(OBJS) $(OBJS_TEST) -lcriterion

normale: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(LDFLAGS) -o $(NAME)

t:
	make
	./test.out

d:
	rm src/*.o src/*.c~ test/*.o test/*.c~ include/*.h~ *~

save:
	git add src/ test/ include/ Makefile
	git commit -m "Sauvegarde"
	git push --force

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

# Theses rules do not directly map to a specific file
.PHONY: all clean fclean re
