/*Write a program to print a square pattern based on an integer input n. The pattern should consist of asterisks (*) and hash symbols (#) arranged as follows:

The first and last rows of the square are completely filled with asterisks (*).
The intermediate rows have asterisks (*) at the boundaries and hash symbols (#) filling the inner spaces.
Note: Handle invalid inputs gracefully by displaying an appropriate error message, "Shape Not Possible", if the square cannot be drawn having (#) within it.

Input Format

A single integer n.
Constraints

-50 <= n <= 50
Output Format

A square pattern, for n=5, as described below:
*****
*###*
*###*
*###*
*****
Print "Shape Not Possible" if the sandglass cannot be drawn.
Sample Input 0

5
Sample Output 0

*****
*###*
*###*
*###*
*****   */

#include <stdlib.h>

int main() {
    int n;
    
    scanf("%d", &n);
   
  
    if (n <= 2 || n > 50) {
        printf("Shape Not Possible");
        return 0;
    }
    
  
    for (int j = 0; j < n; j++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < n-2; i++) {
        printf("*");
        for (int j = 0; j < n-2; j++) {
            printf("#");
        }
        printf("*\n");
    }

    for (int j = 0; j < n; j++) {
        printf("*");
    }
    
    return 0;
}

