CC = gcc
CFLAGS = -Wall -g `pkg-config --cflags gtk+-3.0` -I../include
LDFLAGS = `pkg-config --libs gtk+-3.0`
OBJS = main.o calc_logic.o gui_setup.o button_digit.o \
       button_add.o button_subtract.o button_multiply.o \
       button_divide.o button_equals.o button_clear.o

calculator: $(OBJS)
	$(CC) -o calculator $(OBJS) $(LDFLAGS)

main.o: main.c ../include/calc_logic.h ../include/gui_setup.h
	$(CC) $(CFLAGS) -c main.c

calc_logic.o: calc_logic.c ../include/calc_logic.h
	$(CC) $(CFLAGS) -c calc_logic.c

gui_setup.o: gui_setup.c ../include/gui_setup.h ../include/calc_logic.h ../include/button_digit.h \
             ../include/button_add.h ../include/button_subtract.h ../include/button_multiply.h ../include/button_divide.h \
             ../include/button_equals.h ../include/button_clear.h
	$(CC) $(CFLAGS) -c gui_setup.c

button_digit.o: button_digit.c ../include/button_digit.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_digit.c

button_add.o: button_add.c ../include/button_add.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_add.c

button_subtract.o: button_subtract.c ../include/button_subtract.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_subtract.c

button_multiply.o: button_multiply.c ../include/button_multiply.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_multiply.c

button_divide.o: button_divide.c ../include/button_divide.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_divide.c

button_equals.o: button_equals.c ../include/button_equals.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_equals.c

button_clear.o: button_clear.c ../include/button_clear.h ../include/calc_logic.h
	$(CC) $(CFLAGS) -c button_clear.c

clean:
	rm -f calculator $(OBJS)