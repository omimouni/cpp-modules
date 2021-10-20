# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omimouni <omimouni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/19 18:56:59 by omimouni          #+#    #+#              #
#    Updated: 2021/10/20 19:42:11 by omimouni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRCS = megaphone.cpp

OBJS = $(addprefix build/, $(SRCS:.cpp=.o))

FLAGS = ##-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

clean:
	@rm -rf $(OBJS)

fclean:
	@rm -rf build/
	@rm -rf $(NAME)

build/%.o: %.cpp
	@mkdir -p $(dir $@)
	@clang++ $(FLAGS) -c -o $@ $<