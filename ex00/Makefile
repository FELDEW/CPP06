NAME		=	bureaucrat

SRCS		=	./main.cpp
	
OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

%.o:		%.cpp 
			$(CPP)   -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.
			@echo "bureaucrat"

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re