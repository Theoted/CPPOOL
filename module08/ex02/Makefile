NAME	=	whatever
SRCS	=	main.cpp MutantStack.cpp

HEADERS	=	MutantStack.hpp

CC		=	c++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp $(HEADERS) Makefile
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re