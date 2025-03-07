/*Write a program that takes two inputs from the user and output the first n multiples of x.

Input Format

An integer n, which represents the number of multiples to print.
An integer x, which represents the number whose multiples need to be printed.
Constraints

0 ≤ n ≤ 1000
-1000 ≤ x ≤ 1000
Output Format

Print the first n multiples of x in a single line, separated by spaces.
Sample Input 0

5 6
Sample Output 0

6 12 18 24 30*/

#include <stdio.h>

int main() {
    int n,x;
    scanf("%d %d",&n,&x);
    for(int i=1;i<=n;i++)
    {
        printf("%d ",i*x);
    }
    
    
   
    return 0;
}