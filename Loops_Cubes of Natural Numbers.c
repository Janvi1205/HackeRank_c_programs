/*Write a program to print the cubes of first N natural numbers , where N is taken as input from the user. Each number should be followed by a space.

Input Format

A single integer n representing representing the range limit.
Constraints

0 <= N <= 10^4
Output Format

Print all cubes of first N natural numbers, separated by a space.
Sample Input 0

15
Sample Output 0

1 8 27 64 125 216 343 512 729 1000 1331 1728 2197 2744 3375*/

#include <stdio.h>

int main() {

    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        int res=i*i*i;
        printf("%d ",res);
    }
    return 0;
}