#include <gtk/gtk.h>
#include "../include/calc_logic.h"
#include "../include/gui_setup.h"

int main(int argc, char *argv[]) {
    GtkWidget *window;
    
    // Initialize GTK
    gtk_init(&argc, &argv);
    
    // Create window
    window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 250, 300);
    gtk_container_set_border_width(GTK_CONTAINER(window), 10);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);
    
    // Set up the GUI components
    setup_gui(window);
    
    // Show all widgets
    gtk_widget_show_all(window);
    
    // Start main loop
    gtk_main();
    
    return 0;
}