# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ivar <ivar@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/21 00:18:09 by ivar              #+#    #+#              #
#    Updated: 2024/10/25 10:00:38 by ivar             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

DOTC = ft_atoi.c ft_isalpha.c ft_itoa.c ft_memmove.c ft_strdup.c ft_strlcpy.c ft_strnstr.c ft_tolower.c ft_bzero.c ft_isascii.c ft_putendl_fd.c ft_memchr.c ft_memset.c ft_strlen.c ft_toupper.c ft_striteri.c ft_calloc.c ft_isdigit.c ft_memcmp.c ft_substr.c ft_strrchr.c ft_putnbr_fd.c ft_strmapi.c ft_strjoin.c ft_split.c ft_isalnum.c ft_isprint.c ft_memcpy.c  ft_strchr.c ft_strlcat.c ft_strncmp.c ft_putchar_fd.c ft_putstr_fd.c ft_strtrim.c

BONUS_DOTC = ft_lstnew.c ft_lstadd_front.c ft_lstlast.c ft_lstsize.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJECTS = $(DOTC:.c=.o)

BONUS_OBJECTS = $(BONUS_DOTC:.c=.o)

CFLAGS = -Wall -Wextra -Werror

ifeq ($(filter bonus,$(MAKECMDGOALS)),)
OBJ = $(OBJECTS)
else
OBJ = $(BONUS_OBJECTS)
endif

all: $(NAME)

bonus: $(NAME)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -rf $(OBJECTS) $(BONUS_OBJECTS)

fclean:	clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
