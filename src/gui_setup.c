#include "../include/gui_setup.h"
#include "../include/calc_logic.h"
#include "../include/button_digit.h"
#include "../include/button_add.h"
#include "../include/button_subtract.h"
#include "../include/button_multiply.h"
#include "../include/button_divide.h"
#include "../include/button_equals.h"
#include "../include/button_clear.h"

// Set up the GUI components
void setup_gui(GtkWidget *window) {
    GtkWidget *grid;
    GtkWidget *button;
    
    // Create grid layout
    grid = gtk_grid_new();
    gtk_grid_set_row_spacing(GTK_GRID(grid), 5);
    gtk_grid_set_column_spacing(GTK_GRID(grid), 5);
    gtk_container_add(GTK_CONTAINER(window), grid);
    
    // Create result display
    result_label = gtk_label_new("0");
    gtk_widget_set_halign(result_label, GTK_ALIGN_END);
    gtk_label_set_selectable(GTK_LABEL(result_label), TRUE);
    gtk_widget_set_hexpand(result_label, TRUE);
    gtk_grid_attach(GTK_GRID(grid), result_label, 0, 0, 4, 1);
    
    // Create digit buttons
    button = create_digit_button("7");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 1, 1, 1);
    
    button = create_digit_button("8");
    gtk_grid_attach(GTK_GRID(grid), button, 1, 1, 1, 1);
    
    button = create_digit_button("9");
    gtk_grid_attach(GTK_GRID(grid), button, 2, 1, 1, 1);
    
    button = create_digit_button("4");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 2, 1, 1);
    
    button = create_digit_button("5");
    gtk_grid_attach(GTK_GRID(grid), button, 1, 2, 1, 1);
    
    button = create_digit_button("6");
    gtk_grid_attach(GTK_GRID(grid), button, 2, 2, 1, 1);
    
    button = create_digit_button("1");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 3, 1, 1);
    
    button = create_digit_button("2");
    gtk_grid_attach(GTK_GRID(grid), button, 1, 3, 1, 1);
    
    button = create_digit_button("3");
    gtk_grid_attach(GTK_GRID(grid), button, 2, 3, 1, 1);
    
    button = create_digit_button("0");
    gtk_grid_attach(GTK_GRID(grid), button, 0, 4, 2, 1);
    
    button = create_digit_button(".");
    gtk_grid_attach(GTK_GRID(grid), button, 2, 4, 1, 1);
    
    // Create operation buttons
    button = create_add_button();
    gtk_grid_attach(GTK_GRID(grid), button, 3, 1, 1, 1);
    
    button = create_subtract_button();
    gtk_grid_attach(GTK_GRID(grid), button, 3, 2, 1, 1);
    
    button = create_multiply_button();
    gtk_grid_attach(GTK_GRID(grid), button, 3, 3, 1, 1);
    
    button = create_divide_button();
    gtk_grid_attach(GTK_GRID(grid), button, 3, 4, 1, 1);
    
    button = create_equals_button();
    gtk_grid_attach(GTK_GRID(grid), button, 0, 5, 2, 1);
    
    button = create_clear_button();
    gtk_grid_attach(GTK_GRID(grid), button, 2, 5, 2, 1);
}