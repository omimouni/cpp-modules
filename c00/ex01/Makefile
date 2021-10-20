# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/20 21:29:52 by omimouni          #+#    #+#              #
#    Updated: 2021/10/20 21:29:59 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

## TODO: edit this into files
SRCS = $(wildcard *.cpp **/*.cpp)

OBJS = $(addprefix build/, $(SRCS:.cpp=.o))


INC_DIR = ./includes
FLAGS = -Wall -Werror -Wextra -I$(INC_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf build/
	@rm -rf $(NAME)

re: fclean all

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	@clang++ $(FLAGS) -c -o $@ $<