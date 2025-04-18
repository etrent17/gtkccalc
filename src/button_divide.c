#include "button_divide.h"
#include "calc_logic.h"
#include <stdlib.h>
#include <string.h>

// Create divide button
GtkWidget* create_divide_button() {
    GtkWidget *button = gtk_button_new_with_label("/");
    g_signal_connect(button, "clicked", G_CALLBACK(on_divide_clicked), NULL);
    return button;
}

// Divide button click handler
void on_divide_clicked(GtkWidget *widget, gpointer data) {
    if (strlen(current_number) > 0) {
        first_operand = atof(current_number);
        operation = 4; // Divide operation
        strcpy(current_number, "");
        update_display();
    }
}