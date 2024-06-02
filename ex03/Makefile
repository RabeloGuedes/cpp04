CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -I. -g

NAME = InterfaceRecap

SRCS = AMateria.cpp MateriaSource.cpp ICharacter.cpp Character.cpp Cure.cpp Ice.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJS) main.cpp
	$(CXX) $(CXXFLAGS) $(OBJS) main.cpp -o $(NAME)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
