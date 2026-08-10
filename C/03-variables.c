#include <stdio.h>

int main() {

    char name[] = "Nahuel"; // char = variable containing characters, [] = multiple characters
    int age = 19; // int = integer
    printf("My name is %s and I'm %d", name, age); // %s = inserting a string, %d = inserting an integer

    int changingAge = 20;
    printf("Age: %d", changingAge);
    changingAge = changingAge + 2;
    printf("Age: %d", changingAge);


    // Decimal numbers

    float pi_float = 3.14159f; // 4 bytes, 6-7 digits
    double pi_double = 3.14159265358979; // 8 bytes, 15-16 digits

    // Char 

    char single = 'A'; // Single character
    char string[] = "Longer"; // Multiple characters (string)
    return 0;
}