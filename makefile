CFLAGS = -Wall -g -ansi -O2
OBJS1 = main_bst.o bst.o list.o aux.o

bst: $(OBJS1)	
	$(CC) -o $@ $?

clean:
	rm -rf $(OBJS1)  $(OBJS2) $(programs) *~ 
