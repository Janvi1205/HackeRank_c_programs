/*Write a program to print the squares of numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single integer n representing representing the range limit.
Constraints

0 <= N <= 10^4
Output Format

Print all squares of numbers from 1 to N (inclusive), separated by a space.
Sample Input 0

5
Sample Output 0

1 4 9 16 25 */

#include <stdio.h>

int main() {
    
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        int res=i*i;
        printf("%d ",res);
    }    
  
    return 0;
}