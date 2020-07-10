# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lryst <lryst@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/29 19:38:24 by lryst             #+#    #+#              #
#    Updated: 2020/07/07 12:34:48 by lryst            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

##################################### PATH #####################################


#################################### SOURCES ###################################

SRCS +=	ft_strlen.s ft_strcpy.s ft_strcmp.s ft_strdup.s\

##################################### BASIC ####################################

CFLAGS 	= -Wall -Wextra -Werror

CC = gcc

HEADER = libasm.h

OBJS = $(SRCS:.s=.o)

EXE = exe

#################################### RULES ####################################

all : $(NAME)

.s.o:
	nasm -f elf64 $^

$(NAME) : ${OBJS} 
	ar rcs $(NAME) $(OBJS)

exe : $(NAME)
	$(CC) -no-pie $(CFLAGS) main.c -L ./ -lasm -o $(EXE)

run : exe
	./exe

clean :
	rm -rf $(NAME)
	rm -rf $(OBJS)

fclean : clean 
	rm exe

re : fclean all

.PHONY : all clean fclean re
.SILENT :