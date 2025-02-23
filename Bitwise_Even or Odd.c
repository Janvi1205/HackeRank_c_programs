/*Write a program to determine whether a given integer N is even or odd using only bitwise operators.

The program should not use the modulo (%) operator.

Input Format

A single integer N
Constraints

-10^5 ≤ N ≤ 10^5
Output Format

Print Even if N is an even number.
Print Odd if N is an odd number.
Sample Input 0

4        
Sample Output 0

Even*/

#include <stdio.h>

int main() {

    int num;
    scanf("%d",&num);
    
    if((num & 1)==0)
    {
        printf("Even");
    }
    else if((num & 1)==1)
    {
        printf("Odd");
        
    }
    else{
        printf("Invalid input");
    }
    return 0;
}