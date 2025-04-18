#ifndef BUTTON_CLEAR_H
#define BUTTON_CLEAR_H

#include <gtk/gtk.h>

// Create clear button
GtkWidget* create_clear_button();

// Event handler for clear button
void on_clear_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_CLEAR_H */