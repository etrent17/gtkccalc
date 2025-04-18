#ifndef BUTTON_EQUALS_H
#define BUTTON_EQUALS_H

#include <gtk/gtk.h>

// Create equals button
GtkWidget* create_equals_button();

// Event handler for equals button
void on_equals_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_EQUALS_H */