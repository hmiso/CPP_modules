# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hmiso <hmiso@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/14 21:35:31 by hmiso             #+#    #+#              #
#    Updated: 2020/12/16 18:28:36 by hmiso            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=megaphone

OBJ_FILES = megaphone.o

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
