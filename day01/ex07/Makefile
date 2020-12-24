# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/22 17:24:20 by hmiso             #+#    #+#              #
#    Updated: 2020/12/22 17:24:49 by hmiso            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=replace

OBJ_FILES = main.o

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ_FILES)
	clang++ $(OBJ_FILES) -o $(NAME)

%.o: %.c 
	clang++ -c $(CFLAGS) -o $@ $<

clean:
	rm -f $(OBJ_FILES)

fclean: clean
	rm -f $(NAME)

re: fclean all