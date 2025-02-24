/*Given a number n and a position i, write a program to unset the i-th bit of n using bitwise operators.

Input Format

The first line contains an integer n.
The second line contains an integer i.
Constraints

-10^9 ≤ n ≤ 10^9
0 ≤ i ≤ 31
Output Format

Print the updated value of n after unsetting the i-th bit.
Sample Input 0

5
1
Sample Output 0

5*/


#include <stdio.h>

int main() {

   int n, i,res;
    scanf("%d", &n);
    scanf("%d", &i);

    res = n & ~(1 << i);

    
    printf("%d\n", res);
    return 0;
}