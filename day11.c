#include <stdio.h>

// Q21: Write a program to display the month name and number of days using switch-case for a given month number.
void question21() {
    int month;

    printf("Enter Month Number (1-12): ");
    scanf("%d", &month);

    switch (month) {
        case 1 : 
                printf("January, 31 Days\n");
                break;
        case 2 :
                printf("Febrary, 28 Days (29 Days in Leap Year)\n");
                break;
        case 3 :
                printf("March, 31 Days");
                break;
        case 4 :
                printf("April, 30 Days");
                break;
        case 5 : 
                printf("May, 31 Days");
                break;
        case 6 : 
                printf("June, 30 Days");
                break;
        case 7 :
                printf("July, 31 Days");
                break;
        case 8 :
                printf("August, 31 Days");
                break;
        case 9 :
                printf("September, 30 Days");
                break;
        case 10 : 
                printf("October, 31 Days");
                break;
        case 11 :
                printf("November, 30 Days");
                break;
        case 12 :
                printf("December, 31 Days");
                break;
        default : 
                printf("Invalid Month Number");
                break;
    }
}


// Q22: Write a program to find profit or loss percentage given cost price and selling price.








int main() {
    question21();
    return 0;
}