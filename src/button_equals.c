#include "../include/button_equals.h"
#include "../include/calc_logic.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Create equals button
GtkWidget* create_equals_button() {
    GtkWidget *button = gtk_button_new_with_label("=");
    g_signal_connect(button, "clicked", G_CALLBACK(on_equals_clicked), NULL);
    return button;
}

// Equal button click handler
void on_equals_clicked(GtkWidget *widget, gpointer data) {
    if (operation == 0 || strlen(current_number) == 0) {
        return;
    }
    
    double second_operand = atof(current_number);
    double result = 0;
    
    // Handle division by zero
    if (operation == 4 && second_operand == 0) {
        gtk_label_set_text(GTK_LABEL(result_label), "Error: Div by 0");
        return;
    }
    
    result = perform_operation(first_operand, second_operand, operation);
    
    // Convert result to string and display it
    sprintf(current_number, "%.6g", result);
    update_display();
    operation = 0;
}