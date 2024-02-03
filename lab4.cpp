#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a rectangle
    rectangle(100, 100, 300, 200);

    // Draw a circle
    circle(400, 150, 50);

    // Draw a line
    line(500, 100, 600, 200);

    getch();  // Wait for user input
    closegraph();  // Close the graphics window

    return 0;
}
