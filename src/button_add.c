#include "../include/button_add.h"
#include "../include/calc_logic.h"
#include <stdlib.h>
#include <string.h>

// Create add button
GtkWidget* create_add_button() {
    GtkWidget *button = gtk_button_new_with_label("+");
    g_signal_connect(button, "clicked", G_CALLBACK(on_add_clicked), NULL);
    return button;
}

// Add button click handler
void on_add_clicked(GtkWidget *widget, gpointer data) {
    if (strlen(current_number) > 0) {
        first_operand = atof(current_number);
        operation = 1; // Add operation
        strcpy(current_number, "");
        update_display();
    }
}