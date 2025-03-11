/*Write a program to set the rightmost unset bit in the binary representation of a number n.

Note: You should not use any loops to solve this problem.

Input Format

A single integer n.
Constraints

-2^31 ≤ n < 2^31
Output Format

A single integer, which is the value of n after setting the rightmost unset bit to 1.
Sample Input 0

18
Sample Output 0

19*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n | (n + 1)); 
    return 0;
}

