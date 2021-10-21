# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:56:59 by omimouni          #+#    #+#              #
#    Updated: 2021/10/21 20:25:24 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

## TODO: name your file
NAME = megaphone

## TODO: edit this into files
SRCS = megaphone.cpp

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
