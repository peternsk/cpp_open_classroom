#************************************************#
#**  			  BASIC VARIABLES			   **#
#************************************************#

NAME 	= megaphone
CC 		= c++
FLAGDS	= -Wall -Werror -Wextra -std=c++98
RM		= rm -rf

#************************************************#
#**  				 FUNCTIONS				   **#
#************************************************#

SRC 	=	megaphone.cpp
OBJ     =   $(SRC:.cpp=.o)

#************************************************#
#**  				   TARGETS				   **#
#************************************************#

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY : all clean fclean re 