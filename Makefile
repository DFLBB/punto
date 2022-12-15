PUNTO_SRC	=	punto.c
PUNTO		=	punto

CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Werror -Wextra

all:	punto
		@printf $(GREEN)" Punto compiled ✅\n"

punto: 
		$(CC) $(CFLAGS) $(PUNTO_SRC) -o $(PUNTO)