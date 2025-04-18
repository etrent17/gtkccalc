#ifndef CALC_LOGIC_H
#define CALC_LOGIC_H

// Global variables for calculator functionality
extern char current_number[100];
extern double first_operand;
extern int operation; // 0: none, 1: add, 2: subtract, 3: multiply, 4: divide

// Calculator logic functions
void clear_calculator();
double perform_operation(double first, double second, int op);

#endif /* CALC_LOGIC_H */