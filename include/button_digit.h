#ifndef BUTTON_DIGIT_H
#define BUTTON_DIGIT_H

#include <gtk/gtk.h>

// Create digit buttons (0-9 and decimal)
GtkWidget* create_digit_button(const char* digit);

// Event handler for digit buttons
void on_digit_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_DIGIT_H */