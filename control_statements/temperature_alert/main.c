#include <stdio.h>

int main() {
    int a = 2;
    double b = 3;

    if (a != 0 && b != 0) 
        printf(" Answer: %f \n", a / b);
    else if (a == 0 && b != 0)  
        printf(" Answer: 0 / b = an infinitesimal number\n");
    else if (a != 0 && b == 0) 
        printf("Answer: a / 0 = an infinite number\n"); // division by zero
    else
        printf("Answer: 0 / 0 = ???"); // division by zero

    return 0;
}