# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/27 14:20:33 by ageels        #+#    #+#                  #
#    Updated: 2023/03/30 17:44:25 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = "Unnecessary violence"

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp\
	
OBJ_DIR = obj

OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.cpp=.o))

all : $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR) :
	mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
	c++ $(FLAGS) -c $< -o $@

clean :
	rm -fr $(OBJ_DIR)
	
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re