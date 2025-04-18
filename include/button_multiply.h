#ifndef BUTTON_MULTIPLY_H
#define BUTTON_MULTIPLY_H

#include <gtk/gtk.h>

// Create multiply button
GtkWidget* create_multiply_button();

// Event handler for multiply button
void on_multiply_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_MULTIPLY_H */