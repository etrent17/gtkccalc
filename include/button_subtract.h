#ifndef BUTTON_SUBTRACT_H
#define BUTTON_SUBTRACT_H

#include <gtk/gtk.h>

// Create subtract button
GtkWidget* create_subtract_button();

// Event handler for subtract button
void on_subtract_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_SUBTRACT_H */