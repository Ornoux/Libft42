# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: npatron <npatron@student.42nice.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/27 16:49:07 by npatron           #+#    #+#              #
#    Updated: 2023/04/16 11:45:54 by npatron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_bzero.c \
	  ft_isalnum.c \
	  ft_isalpha.c \
	  ft_isascii.c \
	  ft_isdigit.c \
	  ft_isprint.c \
	  ft_memset.c  \
	  ft_strlen.c \
	  ft_memcpy.c \
	  ft_strlcpy.c \
	  ft_toupper.c \
	  ft_tolower.c \
	  ft_strchr.c \
	  ft_strrchr.c \
	  ft_strncmp.c \
	  ft_memchr.c \
	  ft_memcmp.c \
	  ft_strnstr.c \
	  ft_atoi.c \
	  ft_calloc.c \
	  ft_strlcat.c \
	  ft_memmove.c \
	  ft_strdup.c \
	  ft_substr.c \
	  ft_split.c \
	  ft_itoa.c \
	  ft_striteri.c \
	  ft_strmapi.c \
	  ft_putchar_fd.c \
	  ft_putstr_fd.c \
	  ft_putendl_fd.c \
	  ft_putnbr_fd.c \
	  ft_strtrim.c \
	  ft_strjoin.c

BONUS = ft_lstiter_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstadd_back_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(BONUS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.c.o:
	gcc $(CFLAGS) -c $< -o ${<:.c=.o}

all: $(NAME)

$(NAME): $(OBJ)
		 ar -rc $(NAME) $(OBJ)
		 
bonus : $(OBJ_BONUS) $(OBJ)
		ar rc $(NAME) $(OBJ) $(OBJ_BONUS)

clean:
		rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
		rm -f $(NAME)

re: fclean all