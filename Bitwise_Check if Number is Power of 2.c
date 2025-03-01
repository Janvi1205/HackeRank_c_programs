/*Write a program to check if a given integer n is a power of 2 using bitwise operators.

Input Format

A single integer n.
Constraints

−10^9 ≤ n ≤ 10^9

Output Format

Print "Yes" if n is a power of 2.
Print "No" otherwise.
Sample Input 0

16
Sample Output 0

Yes*/


#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n > 0 && (n & (n-1)) == 0)
        printf("Yes\n");
    else
        printf("No\n");
    
    return 0;
}