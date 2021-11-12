# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:56:59 by omimouni          #+#    #+#              #
#    Updated: 2021/11/12 22:45:59 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(addprefix build/, $(SRCS:.cpp=.o))


INC_DIR = ./includes
FLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "Program compiled !"

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf build/
	@rm -rf $(NAME)

re: fclean all

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	@clang++ $(FLAGS) -c -o $@ $<
