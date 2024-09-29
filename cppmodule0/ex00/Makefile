NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -rf

SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

.cpp.o:
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(NAME) made"

clean:
	@$(RM) $(OBJS)
	@echo "objects removed"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(NAME) removed"

re: fclean all

run: all clean

.PHONY: all clean fclean re run