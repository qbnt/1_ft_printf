# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: qbanet <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/02 12:04:16 by qbanet            #+#    #+#              #
#    Updated: 2023/02/11 13:05:59 by qbanet           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Couleurs pour les messages de compilation
RESET = \033[0m
GREEN = \033[32m
YELLOW = \033[33m
RED = \033[31m

# Nom de la bibliothèque
NAME = libft.a

# Dossiers
SRC_DIR = src
OBJ_DIR = obj
INC_DIR = include

# Fichiers sources
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Fichiers objets
OBJS = $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# Flags de compilation
CC = gcc
CFLAGS = -Wall -Wextra -Werror
INCLUDES = -I $(INC_DIR)

# Règles de compilation
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compilation de $(NAME) en cours...$(RESET)"
	@ar rc $(NAME) $^
	@ranlib $(NAME)
	@echo "$(GREEN)Compilation de $(NAME) terminée !$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	@echo "$(YELLOW)Compilation de $@ en cours...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
	@echo "$(GREEN)Compilation de $@ terminée !$(RESET)"

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(GREEN)Dossier pour les objets cree.$(RESET)"

# Règle pour nettoyer les fichiers objets
clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(RED)Objets supprimes$(RESET)"

# Règle pour nettoyer tous les fichiers générés
fclean: clean
	@rm -f $(NAME)
	@echo "$(RED)Objets et $(NAME) supprimes$(RESET)"

# Règle pour tout recompiler
re: fclean all

.PHONY: all clean fclean re
