#include <stdio.h>

// Function to get the area of a rectangle
int getRectangleArea(int length, int width) {
    int area = length * width;
    return area;
}//end getRectangleArea

// Basic program to calculate the area of a rectangle
int main() {
    int length, width, area;
    // Get the length of the rectangle
    printf("Enter the length of the rectangle:\n");
    scanf("%d", &length);

    // Basic input validation to make sure the length is greater than 0
    if (length <= 0) {
        printf("The entered value is invalid, try again!");
        return -1;
    }//end if

    // Get the width of the rectangle
    printf("Enter the width of the rectangle:\n");
    scanf("%d", &width);

    // Basic input validation to make sure the width is greater than 0
    if (width <= 0) {
        printf("The entered value is invalid, try again!");
        return -1;
    }//end if

    // Get the area of the rectangle
    area = getRectangleArea(length, width);

    // Print the area of the rectangle
    printf("The area of the rectangle is = %d\n", area);
    return 0;
}//end main