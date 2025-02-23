/*Given a number n and a position i, write a program to set the i-th bit of n using bitwise operators.

Input Format

The first line contains an integer n.
The second line contains an integer i.
Constraints

-10^9 ≤ n ≤ 10^9
0 ≤ i ≤ 31
Output Format

Print the updated value of n after setting the i-th bit.
Sample Input 0

10
3
Sample Output 0

10*/

#include <stdio.h>

int main() {

    int num,i,res;
    scanf("%d",&num);
    scanf("%d",&i);
    
    res=num|1<<i;
    printf("%d",res);
    
    return 0;
}