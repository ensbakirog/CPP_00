NAME	:= megaphone

FLAGS	:= -Wall -Wextra -Werror -std=c++98

CC		:= g++
RM		:= rm -rf

SRC		:= megaphone.cpp
OBJ		:= $(SRC:.cpp=.o)

RED		:= \033[31m
GREEN	:= \033[32m
YELLOW	:= \033[33m
BLUE	:= \033[34m
MAGENTA	:= \033[35m
CYAN	:= \033[36m
RESET	:= \033[0m

CC_MSG		:= @printf "$(CYAN)$(CC)$(RESET) $(YELLOW)$(FLAGS)$(RESET) $(MAGENTA)$(OBJ)$(RESET) -o $(GREEN)$(NAME)$(RESET)\n"
SUCCESS_MSG	:= @printf "$(GREEN)$(NAME) has been compiled$(RESET)\n"
CLEAN_MSG 	:= @printf "$(YELLOW)Object files removed$(RESET)\n"
FCLEAN_MSG	:= @printf "Executable $(YELLOW)$(NAME)$(RESET) removed\n"
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)
	$(CC_MSG)
	$(SUCCESS_MSG)

%.o: %.cpp
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJ)
	$(CLEAN_MSG)

fclean: clean
	@$(RM) $(NAME)
	$(FCLEAN_MSG)

re: fclean all

.PHONY: all clean fclean re