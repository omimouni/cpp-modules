# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 21:29:52 by omimouni          #+#    #+#              #
#    Updated: 2021/11/15 20:15:56 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex05

SRCS = Karen.cpp main.cpp

OBJS = $(addprefix build/, $(SRCS:.cpp=.o))


INC_DIR = .
FLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

HEADERS = $(wildcard $(INC_DIR)/*.hpp)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)
	@echo "$(NAME) Compiled !"

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf build/
	@rm -rf $(NAME)

re: fclean all

build/%.o: %.cpp $(HEADERS)
	@mkdir -p $(dir $@)
	@clang++ $(FLAGS) -c -o $@ $<