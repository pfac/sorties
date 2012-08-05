CC		=	gcc
CFLAGS	=	-Wall -Wextra -std=c99 -pedantic -g

.PHONY:	clean

EXECS	=	bubble insertion mergesort quicksort selection

all:	$(EXECS)

clean:
	$(RM) *.o $(EXECS)
