NAME	:= megaphone

FLAGS	:= -Wall -Wextra -Werror -std=c++98

CC		:= g++
RM		:= rm -rf

SRC		:= megaphone.cpp

RED		:= \033[31m
GREEN 	:= \033[32m
YELLOW 	:= \033[33m
BLUE 	:= \033[34m
MAGENTA := \033[35m
CYAN 	:= \033[36m
RESET 	:= \033[0m

BRED 	:= \033[1;31m
BGREEN 	:= \033[1;32m
BYELLOW := \033[1;33m
BBLUE	:= \033[1;34m
BMAGEN	:= \033[1;35m
BCYAN 	:= \033[1;36m

all: $(NAME)

$(NAME):
	@$(CC) $(FLAGS) $(SRC) -o $(NAME)
	@printf "$(CYAN)$(CC)$(RESET) $(YELLOW)$(FLAGS)$(RESET) $(MAGENTA)$(SRC)$(RESET) $(RED)-o$(RESET) $(GREEN)$(NAME)$(RESET)\n"
	@printf "$(BGREEN)Program has been compiled$(RESET)\n"
	@sleep 3
	@clear
clean:
	@$(RM) $(NAME)
	@printf "$(BCYAN)$(NAME)$(RESET) $(YELLOW)has been deleted$(RESET)\n"
	@sleep 1
	@clear

fclean:	clean

re: clean all

.PHONY: all clean fclean re