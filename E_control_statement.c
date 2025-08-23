/*
THERE ARE THREE TYPES OF CONTROL STATEMENTS IN C:-
 1.Conditional statements → Decision-making (what to do).
  Examples: if, if-else, switch.
 2.Loop statements → Repetition (how many times to do).
  Examples: for, while, do-while.
 3.Jump statements → Jumping (when to do).
  Examples: break, continue, return.
*/


// 1. Conditional Statements

// if statement
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // check if the number is positive
    if (num > 0) {
        printf("The number is positive.\n");
    }

    return 0;
}


// if-else statement
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    // check if the number is positive or negative
    if (num >= 0) {
        printf("The number is positive.\n");
    } else {
        printf("The number is negative.\n");
    }
    return 0;
}

// switch statement
#include <stdio.h>
int main() {
    int day;
    printf("Enter a number (1-7) to get the corresponding day of the week: ");
    scanf("%d", &day);
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid input! Please enter a number between 1 and 7.\n");
    }
    return 0;
}
// Note: The break statement is used to exit the switch-case block after a match is found. Without it, the program would continue executing the subsequent cases.

