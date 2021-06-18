#include <stdio.h>
#include <stdlib.h>

#include "include/ansifmt.h"

int main()
{
    fputs(z__ansi_scr(
            (clear), // Clears Screen
            (jump)), // Set Cursor At Top-left corner
        stdout);

    int number = random() &0xFFFF;

    printf(z__ansi_fmt(
            (cl256, 23, 254), // Set 8bit color
            (bold)) // Turn on bold text
                "Hello, World!\n"

        z__ansi_fmt((no, bold))  // Only disable Bold Text, color config is still intact.
                "Number Generated => %d\n"

        z__ansi_fmt(
            (clrgb, 156, 0, 33, 234, 134, 0), //Set true color on (rgb)
            (underline))
                "Goodbye, World!"

        z__ansi_fmt((reset)) "\n",
            number);

}
