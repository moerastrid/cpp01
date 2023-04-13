# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: ageels <ageels@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2023/03/27 14:20:33 by ageels        #+#    #+#                  #
#    Updated: 2023/03/31 19:58:24 by ageels        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = Sed_is_for_losers
CC = clang++
FLAGS = -Wall -Wextra -Werror -std=c++98

INCDIR = inc
DEPDIR = dep
OBJDIR = obj

SRC = main.cpp

OBJS = $(addprefix $(OBJDIR)/, $(SRC:.cpp=.o))
DEPS = $(addprefix $(DEPDIR)/, $(SRC:.cpp=.d))

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(FLAGS) -I $(INCDIR) -o $(NAME) $(OBJS)

#$(OBJS) : | $(OBJDIR)

#$(DEPS) : | $(DEPDIR)

$(DEPDIR) :
	mkdir -p $(DEPDIR)

$(OBJDIR) :
	mkdir -p $(OBJDIR)

#-include $(DEPS)

$(OBJDIR)/%.o : %.cpp | $(DEPDIR) $(OBJDIR)
	$(CC) $(FLAGS) -I $(INCDIR) -MM -MT $@ $< -MF $(@:$(OBJDIR)/%.o=$(DEPDIR)/%.d)
	$(CC) $(FLAGS) -c $< -o $@

clean :
	rm -fr $(OBJDIR) $(DEPDIR)
	
fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re