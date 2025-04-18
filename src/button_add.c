#ifndef BUTTON_ADD_H
#define BUTTON_ADD_H

#include <gtk/gtk.h>

// Create add button
GtkWidget* create_add_button();

// Event handler for add button
void on_add_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_ADD_H */