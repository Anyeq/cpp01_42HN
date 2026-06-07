# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asando <asando@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/06/07 13:17:58 by asando            #+#    #+#              #
#    Updated: 2026/06/07 20:51:58 by asando           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CPP_STD = c++98
INCLUDE = .
CFLAGS = -Wall -Werror -Wextra -std=$(CPP_STD)

SRC_DIR := .
OBJ_DIR := obj

SRC_FILES := main.cpp Harl.cpp
SRCS := $(addprefix $(SRC_DIR)/, $(SRC_FILES))
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

NAME := harl

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -I$(INCLUDE) -c $< -o $@

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -rf $(NAME)

re:
	@$(MAKE) fclean
	@$(MAKE) all

.PHONY: fclean clean re all
