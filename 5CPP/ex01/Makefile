NAME = form

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp \
		Bureaucrat.cpp \
		Form.cpp

HEADER = Bureaucrat.hpp \
			Form.hpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

.cpp.o:
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

nclean: all clean

.PHONY: all re clean fclean nclean
