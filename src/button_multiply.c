#include "../include/button_multiply.h"
#include "../include/calc_logic.h"
#include <stdlib.h>
#include <string.h>

// Create multiply button
GtkWidget* create_multiply_button() {
    GtkWidget *button = gtk_button_new_with_label("*");
    g_signal_connect(button, "clicked", G_CALLBACK(on_multiply_clicked), NULL);
    return button;
}

// Multiply button click handler
void on_multiply_clicked(GtkWidget *widget, gpointer data) {
    if (strlen(current_number) > 0) {
        first_operand = atof(current_number);
        operation = 3; // Multiply operation
        strcpy(current_number, "");
        update_display();
    }
}