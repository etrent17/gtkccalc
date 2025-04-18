#ifndef BUTTON_DIVIDE_H
#define BUTTON_DIVIDE_H

#include <gtk/gtk.h>

// Create divide button
GtkWidget* create_divide_button();

// Event handler for divide button
void on_divide_clicked(GtkWidget *widget, gpointer data);

#endif /* BUTTON_DIVIDE_H */