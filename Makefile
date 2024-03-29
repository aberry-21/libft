# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aberry <aberry@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/03/21 16:59:06 by aberry            #+#    #+#              #
#    Updated: 2021/03/21 17:07:49 by aberry           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME=libft.a

SRC =	ft_bzero.c   \
		ft_memccpy.c \
		ft_memchr.c  \
		ft_memcmp.c  \
		ft_memcpy.c  \
		ft_memmove.c \
		ft_memset.c  \
		ft_strchr.c  \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c  \
		ft_strrchr.c \
		ft_strnstr.c \
		ft_strncmp.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isalnum.c \
		ft_isascii.c \
		ft_isprint.c \
		ft_toupper.c \
		ft_tolower.c \
		ft_atoi.c    \
		ft_calloc.c  \
		ft_strdup.c  \
		ft_substr.c  \
		ft_strjoin.c \
		ft_strtrim.c \
		ft_split.c   \
		ft_itoa.c\
		ft_strmapi.c\
		ft_putchar_fd.c\
		ft_putstr_fd.c\
		ft_putendl_fd.c\
		ft_putnbr_fd.c
SRC_BONUS = ft_lstnew.c\
		ft_lstadd_front.c\
		ft_lstsize.c\
		ft_lstlast.c\
		ft_lstadd_back.c\
		ft_lstdelone.c\
		ft_lstclear.c\
		ft_lstiter.c\
		ft_lstmap.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

INCLD = ./

all:	$(NAME) aberry

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

bonus:	for_bonus aberry

for_bonus: $(NAME) $(OBJ_BONUS)
	@ar rc $(NAME) $(OBJ) $(OBJ_BONUS)
	@ranlib $(NAME)
	

.c.o:
	@$(CC) $(CFLAGS) -I$(INCLD) -c $< -o $(<:.c=.o)

clean:
	@rm -rf $(OBJ) $(OBJ_BONUS)
fclean: clean
	@rm -rf $(NAME)

aberry:
	@echo "\033[36m\
	░█████╗░██████╗░███████╗██████╗░██████╗░██╗░░░██╗░░░░░░██████╗░░░███╗░░\n\
	██╔══██╗██╔══██╗██╔════╝██╔══██╗██╔══██╗╚██╗░██╔╝░░░░░░╚════██╗░████║░░\n\
	███████║██████╦╝█████╗░░██████╔╝██████╔╝░╚████╔╝░█████╗░░███╔═╝██╔██║░░\n\
	██╔══██║██╔══██╗██╔══╝░░██╔══██╗██╔══██╗░░╚██╔╝░░╚════╝██╔══╝░░╚═╝██║░░\n\
	██║░░██║██████╦╝███████╗██║░░██║██║░░██║░░░██║░░░░░░░░░███████╗███████╗\n\
	╚═╝░░╚═╝╚═════╝░╚══════╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░░░░░░░╚══════╝╚══════╝\033[0m"

re: fclean  all


