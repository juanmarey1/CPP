NAME = Sed_is_for_losers

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = main.cpp files.cpp
OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "Objects created"

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "Executable created"

clean:
	@$(RM) $(OBJS)
	@echo "Objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "Executable removed"

re: fclean all

run: all clean

.PHONY: all clean fclean re run