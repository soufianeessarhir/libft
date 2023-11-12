NAME = libft.a
SOURCES = ft_calloc.c  ft_isascii.c ft_itoa.c    ft_memcpy.c  ft_split.c   ft_strjoin.c ft_strlen.c  ft_strrchr.c ft_tolower.c\
ft_atoi.c    ft_isalnum.c ft_isdigit.c ft_memchr.c  ft_memmove.c ft_strchr.c  ft_strlcat.c ft_strncmp.c ft_strtrim.c ft_toupper.c\
ft_bzero.c   ft_isalpha.c ft_isprint.c ft_memcmp.c  ft_memset.c  ft_strdup.c  ft_strlcpy.c ft_strnstr.c ft_substr.c	ft_striteri.c\
ft_putchar_fd.c	ft_strmapi.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c ft_tolower.c\

BSOURCES =  ft_lstnew.c ft_lstlast.c ft_lstiter.c ft_lstdelone.c ft_lstadd_back.c  ft_lstadd_front.c  ft_lstclear.c ft_lstsize.c ft_lstmap.c\
    
    

OBJECTS = $(SOURCES:.c=.o)
B_OBJECTS = $(BSOURCES:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM =rm -f
AR =ar -rcs
HDR = libft.h

all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $(NAME) $(OBJECTS)

bonus: $(B_OBJECTS)
	$(AR) $(NAME) $(B_OBJECTS)

%.o: %.c $(HDR)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJECTS) $(B_OBJECTS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

# .PHONY: all bonus clean fclean re