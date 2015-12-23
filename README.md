# easyCLI - Because CLI>GUI
Allow easy use of Command Line Interface for basic use

#Why this?
I like Linux. When I learning c++ to school with my teacher. I'm forced to use Windows, because some function won't works on Linux.

#What I implemented?
* `_getch` - Existing on Windows. Added on Linux. :)
* `gotoxy` - Permit to move the cursor
* `Easy use of color` - Allow same code for using of color for both OS (Text & background)
* `clear the screen` - Allow same code for using the system call for clear the screen on both OS.

#How To use
* `_getch()`

      ```c++
      int value=_getch();
      ```
* `gotoxy(X,Y)`

      ```c++
      //moove to 5th line
      gotoxy(0,5);
      ```

* `color(CharColor,BackgroundColor)`

      ```c++
      //write black on white
      color(BLACK,WHITE);
      ```

* `clear()`

      ```c++
      //Just clear screen on both OS
      clear();
      ```

# List of actual colors

* WHITE
* BLACK
* RED
* GREEN
* BLUE
* YELLOW
* CYAN
* PURPLE
