#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int AllSum(int n) {
    int result = 0;
    int i;  // counter variable, not used outside for loop, don't need initialize

    for (i = 1; i<=n; i++) {
        result = result + i;
    }
    return result; //sum of all numbers 1 through n. 
}

// sums up all digits up to max digit user specifies
// example: 
//   user input: 5
//   program output: 15 (basically: 1 + 2 + 3 + 4 + 5)
int main(void)
{
    printf("Welcome, this program calculates a sum from 1 to n, where n is an integer you specify.\n"); // welcome user
    printf("For example, an input of 5 will get an output of %d\n", AllSum(5));
    printf("Please input an integer from 0 to 2^31 - 1: ");
    int n;
    scanf("%d", &n); // get user input
    if (n >= 1) 
    {
        int sum = AllSum(n); // sum it up
        printf("The sum is: %d", sum); // print summary
    }
    else if (n == 0)
    {
        printf("The sum is: 0");
    }
    else if (n < 0)
    {
        while (n < 0) 
        {
            printf("Negative numbers are not allowed. Please input another integer: ");
            scanf("%d", &n);
        }
        int sum = AllSum(n); // sum it up
        printf("The sum is: %d", sum); // print summary
    }
        return 0;
}
/* EOF */
