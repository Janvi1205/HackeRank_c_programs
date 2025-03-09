/*Write a program to generate the series 1, 4, 9, 16, 25, ... of N numbers, but skip the numbers that are divisible by 3.

Input Format

A single integer N.
Constraints

0 ≤ N ≤ 1000
Output Format

A single line containing the series, separated by spaces.
Sample Input 0

5
Sample Output 0

1 4 16 25 49*/

#include <stdio.h>

int main() {

     int n;
    scanf("%d", &n);
    
    for(int i = 1, count = 0; count < n; i++) {
        if((i * i) % 3 != 0) {
            printf("%d", i * i);
            count++;
            if(count < n)
                printf(" ");
        }
    }
    
         
    return 0;
}