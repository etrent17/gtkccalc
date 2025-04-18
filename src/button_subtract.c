#include "button_subtract.h"
#include "calc_logic.h"
#include <stdlib.h>
#include <string.h>

// Create subtract button
GtkWidget* create_subtract_button() {
    GtkWidget *button = gtk_button_new_with_label("-");
    g_signal_connect(button, "clicked", G_CALLBACK(on_subtract_clicked), NULL);
    return button;
}

// Subtract button click handler
void on_subtract_clicked(GtkWidget *widget, gpointer data) {
    if (strlen(current_number) > 0) {
        first_operand = atof(current_number);
        operation = 2; // Subtract operation
        strcpy(current_number, "");
        update_display();
    }
}