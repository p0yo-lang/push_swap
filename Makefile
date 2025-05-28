CC=			cc

CFLAGS=		-Wall -Werror -Wextra -g3 -I./inc -I$(LIBDIR)/inc 

FILENAME=	list_utils main

SOURCEDIR = src/
INCDIR = inc/
OBJDIR = obj/
LIBDIR = libft/
TESTDIR = test/
LIBNAME = libft

SOURCE = 	$(addprefix $(SOURCEDIR), $(addsuffix .c, $(FILENAME)))
OBJECTS	=	$(addprefix $(OBJDIR), $(addsuffix .o, $(FILENAME)))

NAME = push_swap

all: $(OBJDIR) $(NAME)

test: all
	mkdir -p test
	mv $(NAME) $(TESTDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(LIBDIR)$(LIBNAME).a:
	cd $(LIBDIR) && make

$(NAME): $(OBJECTS) $(LIBDIR)$(LIBNAME).a 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBDIR)$(LIBNAME).a

$(OBJDIR)%.o: $(SOURCEDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TESTDIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTDIR)$(NAME)
	cd $(LIBDIR) && make clean

re: fclean all
	cd $(LIBDIR) && make re

.PHONY: all clean fclean re 
