#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the coordinates (x, y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("This is First Quadrant.\n");
    } else if (x < 0 && y > 0) {
        printf("This is Second Quadrant.\n");
    } else if (x < 0 && y < 0) {
        printf("This is Third Quadrant.\n");
    } else {
        printf("This is the Fourth Quadrant")
    }
    return 0;
}