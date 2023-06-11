#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>  // Include the <ctype.h> library for toupper()

//Hypotenuse Calculator
int main() {
    //Initializing variables
    double a, b, c;
    char choice;

    // do while loop and equation
    do {
        printf("Enter the side of the triangle (a): ");
        scanf("%lf", &a);

        printf("Enter another side of the triangle (b): ");
        scanf("%lf", &b);

        c = pow(a, 2) + pow(b, 2);
        printf("The Hypotenuse is: %lf\n", c);

        // Prompt for continuing
        printf("Do you want to calculate again? (Y/N): ");
        scanf(" %c", &choice);  // Note the space before %c to consume the newline character

        // Convert choice to uppercase using toupper()
        choice = toupper(choice);

    } while (choice == 'Y');

    return 0;
}
