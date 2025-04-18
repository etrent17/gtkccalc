#include "../include/button_digit.h"
#include "../include/calc_logic.h"
#include <string.h>

// Create digit button
GtkWidget* create_digit_button(const char* digit) {
    GtkWidget *button = gtk_button_new_with_label(digit);
    g_signal_connect(button, "clicked", G_CALLBACK(on_digit_clicked), (gpointer)digit);
    return button;
}

// Number button click handler
void on_digit_clicked(GtkWidget *widget, gpointer data) {
    const char *number = (const char *)data;
    
    // Prevent multiple decimal points
    if (number[0] == '.' && strchr(current_number, '.') != NULL) {
        return;
    }
    
    // Limit input length to avoid overflow
    if (strlen(current_number) < 15) {
        strcat(current_number, number);
        update_display();
    }
}