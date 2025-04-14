#include <gtk/gtk.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//https://pastebin.com/dJdDbWUt

//Introduce global variables
char current_number[100] = "";
double first_operand = 0;
int operation = 0; 
//0: none 1: add 2: subtract 3: multiply 4: divide
GtkWidget *result_label;

//Introduce display updater helper
void update_display() {
    gtk_label_set_text(GTK_LABEL(result_label), current_number);
}

// handler for number button clicks
void on_number_clicked(GtkWidget *widget, gpointer data) {
    const char *number = (const char *)data;

    //Restrict decimal to one point
    if (number[0] == '.' && strchr(current_number, '.') != NULL) {
        return;
    }


}