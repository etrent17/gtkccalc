# Basic Calculator in C with GTK

This is a simple calculator application written in C using the GTK+ library for the graphical user interface. This project emphasizes **modularity** and a clear **directory structure** for maintainability and scalability.

## Action Plan
* Set proper directory structure.
* Actually write the code - button helpers, then everything else.
* Make sure to catch any errors and handle appropriately. 
* Create proper testing procedures.

## Features

* Basic arithmetic operations: addition, subtraction, multiplication, and division.
* Clear and intuitive graphical user interface.
* Demonstrates good coding practices through modular design.

## Directory Structure TODO

The project follows a structured directory organization to separate concerns and improve code management:

```
basic-calculator/
├── include/
│   ├── calculator.h
│   ├── gtk_interface.h
│   └── ... (other header files)
├── src/
│   ├── calculator.c
│   ├── gtk_interface.c
│   └── main.c
├── build/
├── README.md
└── LICENSE
```

* **`include/`**: This directory contains all the header files (`.h`) for the project. These files declare the interfaces for different modules, promoting modularity by clearly defining how different parts of the program interact.
    * `calculator.h`: Declares functions related to the core calculator logic (e.g., `add`, `subtract`, `multiply`, `divide`).
    * `gtk_interface.h`: Declares functions responsible for creating and managing the GTK+ user interface elements.
    * Other header files might be added as the project grows, each representing a distinct module.

* **`src/`**: This directory holds all the source files (`.c`) containing the actual implementation of the functions declared in the `include/` directory.
    * `calculator.c`: Implements the core calculator logic functions.
    * `gtk_interface.c`: Implements the functions that create the GTK+ widgets, handle user input, and connect UI elements to the calculator logic.
    * `main.c`: Contains the `main` function, which is the entry point of the application. It typically initializes GTK+ and sets up the main window.

* **`build/`**: This directory is intended for storing the build artifacts, such as object files, executables, and other temporary files generated during the compilation process. This keeps the source directory clean. (Note: This directory might be created during the build process).

* **`README.md`**: This file (the one you are currently reading) provides essential information about the project.

* **`LICENSE`**: Contains the licensing information for the project.

## Importance of Modularity and Directory Structure

Even in a basic program like this calculator, adopting a modular design and a well-defined directory structure offers significant advantages:

* **Improved Organization:** Separating code into logical modules (e.g., calculator logic, UI handling) makes the codebase easier to understand and navigate.
* **Enhanced Maintainability:** Changes or bug fixes in one module are less likely to affect other parts of the program, simplifying maintenance.
* **Increased Reusability:** Individual modules, especially the core calculator logic, can potentially be reused in other projects.
* **Easier Collaboration:** When working in a team, a clear structure makes it easier for different developers to work on different parts of the project without conflicts.
* **Better Scalability:** As the program grows in complexity and features are added, a modular design makes it easier to integrate new components without making the codebase unwieldy.

By adhering to these principles from the beginning, this basic calculator serves as a good foundation for learning and practicing structured programming in C with GTK+.

## Building the Project

*(Instructions on how to build the project would typically go here. This might involve using a build system like Make or CMake)*

For a basic setup, you might compile the project using `gcc` directly. Ensure you have the GTK+ development libraries installed on your system. The compilation command might look something like this (adjust paths as needed):

```bash
gcc src/main.c src/calculator.c src/gtk_interface.c -o calculator -Iinclude `pkg-config --cflags gtk+-3.0` `pkg-config --libs gtk+-3.0`
```

## Usage

TODO

## Contributing

Send a PR or make a fork as you please.

## License

APACHE 2.0

(C) Elijah Trent 2025
```
