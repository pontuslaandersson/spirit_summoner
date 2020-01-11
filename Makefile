NAME = spirit_summoner

SRC = ./main.c \
		./summon_spirit.c \
		./print_attacks.c \
		./create_attacks_list.c \
		./divRoundClosest.c \
		./add_attack.c 

INC = -I ./libft/includes/

LIB = -L ./libft/ -lft

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	gcc -c $(SRC) $(INC)
	gcc -o $(NAME) $(OBJ) $(LIB)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re