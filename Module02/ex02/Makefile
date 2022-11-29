NAME	=	Fixed
SRCS	=	main.cpp Fixed.cpp 
HEADERS	=	Fixed.hpp
CC		=	clang++
CFLAGS	=	-std=c++98

# -Wall -Wextra -Werror
OBJS	=	$(SRCS:.cpp=.o)

%.o:		%.cpp
	$(CC) $(CFLAGS) -c $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS) $(HEADERS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: all fclean clean re