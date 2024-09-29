NAME = Abstract_class

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -O0 -g
RM = rm -rf

SRCS = main.cpp AAnimal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(OBJS) made"

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) made"

clean:
	@$(RM) $(OBJS)
	@echo "$(OBJS) removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

run: all clean

.PHONY: all clean fclean re run