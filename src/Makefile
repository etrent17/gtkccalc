CC = gcc
CFLAGS = -Wall -g `pkg-config --cflags gtk+-3.0`
LDFLAGS = `pkg-config --libs gtk+-3.0`
OBJS = main.o calc_logic.o gui_setup.o button_digit.o \
       button_add.o button_subtract.o button_multiply.o \
       button_divide.o button_equals.o button_clear.o

calculator: $(OBJS)
	$(CC) -o calculator $(OBJS) $(LDFLAGS)

main.o: main.c calc_logic.h gui_setup.h
	$(CC) $(CFLAGS) -c main.c

calc_logic.o: calc_logic.c calc_logic.h
	$(CC) $(CFLAGS) -c calc_logic.c

gui_setup.o: gui_setup.c gui_setup.h calc_logic.h button_digit.h \
             button_add.h button_subtract.h button_multiply.h button_divide.h \
             button_equals.h button_clear.h
	$(CC) $(CFLAGS) -c gui_setup.c

button_digit.o: button_digit.c button_digit.h calc_logic.h
	$(CC) $(CFLAGS) -c button_digit.c

button_add.o: button_add.c button_add.h calc_logic.h
	$(CC) $(CFLAGS) -c button_add.c

button_subtract.o: button_subtract.c button_subtract.h calc_logic.h
	$(CC) $(CFLAGS) -c button_subtract.c

button_multiply.o: button_multiply.c button_multiply.h calc_logic.h
	$(CC) $(CFLAGS) -c button_multiply.c

button_divide.o: button_divide.c button_divide.h calc_logic.h
	$(CC) $(CFLAGS) -c button_divide.c

button_equals.o: button_equals.c button_equals.h calc_logic.h
	$(CC) $(CFLAGS) -c button_equals.c

button_clear.o: button_clear.c button_clear.h calc_logic.h
	$(CC) $(CFLAGS) -c button_clear.c

clean:
	rm -f calculator $(OBJS)