NAME = ft_containers
NAME_T = container_test

SRCS = srcs/main.cpp
SRCS_T = srcs/test.cpp

INCLUDE= vector.tpp

OBJS = $(SRCS:.cpp=.o)
DEPS = $(SRCS:.cpp=.d)

OBJS_T = $(SRCS_T:.cpp=.o)
DEPS_T = $(SRCS_T:.cpp=.d)

CC= c++
FLAGS= -Wall -Wextra -Werror -std=c++98 -g3

%.o:				%.cpp
	@$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INCLUDE)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilation du programme $(NAME)"
	$(CC) $(FLAGS) $(OBJS) -o $(NAME)

test: $(NAME_T)

$(NAME_T): $(OBJS_T)
	@echo "Compilation du programme $(NAME_T)"
	$(CC) $(FLAGS) $(OBJS_T) -o $(NAME_T)

clean:
	rm -Rf $(OBJS) $(DEPS) $(OBJS_T) $(DEPS_T) 

fclean: clean
	rm -Rf $(NAME) $(NAME_T)

re: fclean all

-include $(DEPS)
.PHONY: all clean fclean re