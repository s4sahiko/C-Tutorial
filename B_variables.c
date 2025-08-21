/*
Variables in C
Variables are used to store data in a program. They must be declared before they can be used.
In C, a variable must be declared with a specific data type, which determines the kind of
we will further be studying data types.
*/

#include <stdio.h>
int main() {
    int a; // Declaration of variable 'a'
    a = 10; // Initialization of variable 'a'
    printf("The Value of a is %d\n", a);
    return 0;
}

/*
Rules for Naming Variables in C:

>Must begin with a letter or underscore (_)
>Can contain letters, digits, and underscores
>No spaces allowed
>Case-sensitive (Age and age are different)
>Cannot use C keywords (like int, for, etc.)
*/
