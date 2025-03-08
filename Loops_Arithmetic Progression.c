/*Write a program to generate the first n terms of an Arithmetic Progression (AP). The first term a and the common difference d are provided.

Input Format

The first line contains an integer n, the number of terms to generate.
The second line contains two integers a and d, the first term and the common difference, respectively.
Constraints

0 ≤ n ≤ 1000
-1000 ≤ a ≤ 1000
-1000 ≤ d ≤ 1000
Output Format

Print the first n terms of the AP in a single line, separated by spaces.
Sample Input 0

5
2 3
Sample Output 0

2 5 8 11 14*/

#include <stdio.h>

int main() {
    
    int n, a, d;

    scanf("%d", &n);

    scanf("%d %d", &a, &d);
    
    for (int i = 0; i < n; i++) {
        printf("%d", a + (i * d));
 
        if (i < n-1) {
            printf(" ");
        }
    }
    printf("\n");

 
    return 0;
}