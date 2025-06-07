CC=			cc

CFLAGS=		-Wall -Werror -Wextra -g3 -I./inc -I$(LIBDIR)/inc 

FILENAME=	list_utils main
OP_FILES=	push swap rotate reverse_rotate

SOURCEDIR = src/
OPDIR = $(SOURCEDIR)operations/
INCDIR = inc/
OBJDIR = obj/
OPOBJDIR = $(OBJDIR)operations/
LIBDIR = libft/
TESTDIR = test/
LIBNAME = libft

# Source and Object files
SOURCE = 	$(addprefix $(SOURCEDIR), $(addsuffix .c, $(FILENAME))) \
			$(addprefix $(OPDIR), $(addsuffix .c, $(OP_FILES)))

OBJECTS	=	$(addprefix $(OBJDIR), $(addsuffix .o, $(FILENAME))) \
			$(addprefix $(OPOBJDIR), $(addsuffix .o, $(OP_FILES)))

NAME = push_swap

all: $(OBJDIR) $(OPOBJDIR) $(NAME)

test: all
	mkdir -p $(TESTDIR)
	mv $(NAME) $(TESTDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

$(OPOBJDIR):
	mkdir -p $(OPOBJDIR)

$(LIBDIR)$(LIBNAME).a:
	cd $(LIBDIR) && make

$(NAME): $(OBJECTS) $(LIBDIR)$(LIBNAME).a 
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) $(LIBDIR)$(LIBNAME).a

$(OBJDIR)%.o: $(SOURCEDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

$(OPOBJDIR)%.o: $(OPDIR)%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJDIR) $(TESTDIR)

fclean: clean
	rm -f $(NAME)
	rm -f $(TESTDIR)$(NAME)
	cd $(LIBDIR) && make clean

re: fclean all
	cd $(LIBDIR) && make re

.PHONY: all clean fclean re test
