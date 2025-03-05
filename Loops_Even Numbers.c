/*Write a program to print all even numbers from 1 to N, where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single positive integer, N, representing the range limit.
Constraints

0 <= N <= 10^6
Output Format

Print all even numbers from 1 to N (inclusive), separated by a space.
Sample Input 0

10
Sample Output 0

2 4 6 8 10 */

#include <stdio.h>

int main() {
    
    int N;
    scanf("%d",&N);
    for(int i=2;i<=N;i=i+2)
    {
        printf("%d ",i);
    }
     
    return 0;
}