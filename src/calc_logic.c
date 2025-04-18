#include "../include/calc_logic.h"
#include <gtk/gtk.h>
#include <string.h>

// Global variables for calculator functionality
char current_number[100] = "";
double first_operand = 0;
int operation = 0; // 0: none, 1: add, 2: subtract, 3: multiply, 4: divide
GtkWidget *result_label;

// Clear calculator state
void clear_calculator() {
    strcpy(current_number, "");
    first_operand = 0;
    operation = 0;
}

// Perform the specified arithmetic operation
double perform_operation(double first, double second, int op) {
    double result = 0;
    
    switch (op) {
        case 1: // Add
            result = first + second;
            break;
        case 2: // Subtract
            result = first - second;
            break;
        case 3: // Multiply
            result = first * second;
            break;
        case 4: // Divide
            result = first / second;
            break;
    }
    
    return result;
}

// Helper function to update the display
void update_display() {
    gtk_label_set_text(GTK_LABEL(result_label), current_number);
}