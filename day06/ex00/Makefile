# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmiso <hmiso@student.21-school.ru>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 21:35:31 by hmiso             #+#    #+#              #
#    Updated: 2021/01/25 17:11:37 by hmiso            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=convert 

OBJ_FILES = main.o Cast.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES) Cast.hpp
	clang++ $(OBJ_FILES) -o $(NAME)

%.o: %.c 
	clang++ -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all
