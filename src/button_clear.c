#include "../include/button_clear.h"
#include "calc_logic.h"

// Create clear button
GtkWidget* create_clear_button() {
    GtkWidget *button = gtk_button_new_with_label("Clear");
    g_signal_connect(button, "clicked", G_CALLBACK(on_clear_clicked), NULL);
    return button;
}

// Clear button click handler
void on_clear_clicked(GtkWidget *widget, gpointer data) {
    clear_calculator();
    update_display();
}