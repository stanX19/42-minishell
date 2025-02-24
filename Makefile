SRCDIR		= srcs
SRCS		:= $(shell find $(SRCDIR) -name '*.c')

OBJDIR		= objs
OBJDIRS		= $(sort $(dir $(OBJS)))
OBJS		= $(subst $(SRCDIR)/,$(OBJDIR)/,$(subst .c,.o,$(SRCS)))

CWD			:= $(shell pwd)
INCLUDE_DIR	= includes
INCLUDES	= $(INCLUDE_DIR)/libft/includes $(INCLUDE_DIR)/readline
HEADER_DIR	= headers
HEADERS		:= $(shell find $(HEADER_DIR) -name '*.h' -o -name '*.hpp')
HEADERS_INC	= $(addprefix -I,$(sort $(dir $(HEADERS))) $(INCLUDES))

LIBFT_DIR	= $(INCLUDE_DIR)/libft
LIBFT		= $(LIBFT_DIR)/libft.a
LIBS		= $(LIBFT)

IFLAGS		:= -I. $(HEADERS_INC)
LFLAGS		:= -L$(INCLUDE_DIR)/readline -lreadline -lncurses -lhistory

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror -fsanitize=address -g3 -DARCH_X86_64 -fPIE
AR			= ar -rcs
RM			= rm -rf
UP			= \033[1A
FLUSH		= \033[2K

NAME		= msh
ARGV		= 

run: all
	./$(NAME) $(ARGV)

$(NAME): $(LIBS) $(OBJDIRS) $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) $(LFLAGS) $(LIBS) -o $(NAME)

init:
	git init
	mkdir -p $(SRCDIR) $(HEADER_DIR) $(INCLUDE_DIR)
	make $(LIBFT_DIR)

all: $(NAME)

$(OBJDIRS):
	mkdir -p $@
	@echo "$(UP)$(FLUSH)$(UP)$(FLUSH)$(UP)"

$(OBJDIR)/%.o: $(SRCDIR)/%.c $(HEADERS)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@
	@echo "$(UP)$(FLUSH)$(UP)$(FLUSH)$(UP)$(FLUSH)$(UP)"

clean:
	@$(RM) $(OBJS)

fclean:	clean
	make -C $(LIBFT_DIR) fclean
	@$(RM) $(NAME)
	@$(RM) $(TESTDIR)
	@$(RM) $(OBJDIRS)
	@$(RM) ./a.out

re: fclean $(NAME)

push:
	@echo -n "Commit name: "; read name; make fclean;\
	git add .; git commit -m "$$name"; git push;

$(LIBFT): $(shell find $(LIBFT_DIR) -name "*.c")
	make -C $(LIBFT_DIR) all

init_libft: $(LIBFT_DIR)


.PHONY: all clean fclean re bonus push