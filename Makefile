PUNTO_SRC	=	punto.c
PUNTO		=	punto

CC			=	gcc
RM			=	rm -f
CFLAGS		=	-Wall -Werror -Wextra

all:	$(PUNTO)
		@printf "Punto compiled ✅\n"

$(PUNTO):
		$(CC) $(CFLAGS) $(PUNTO_SRC) -o $(PUNTO)