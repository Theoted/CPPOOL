NAME	=	animal
SRCS	=	main.cpp AAnimal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
HEADERS	=	AAnimal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp Cat.hpp Brain.hpp
CC		=	clang++
CFLAGS	=	-std=c++98 -Wall -Wextra -Werror

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