/*Write a program that takes an integer input N and prints its factors in descending order, but skips every alternate factor.

Input Format

A single integer N.
Constraints

1 ≤ N ≤ 10^6
Output Format

Print factors of N in descending order, skipping every alternate factor, separated by spaces and ending with a full-stop(.)
Sample Input 0

12
Sample Output 0

12 4 2.*/

#include <stdio.h>
int main() {
      int N;
    scanf("%d", &N);

    int K = 1;  
    int flag = 0;

  
    for (int i = N; i >= 1; i--) {
        if (N % i == 0) { 
            if (flag % 2 == 0) { 
               if(K){
                   printf("%d", i);
                   K = 0;
               } else {
                   printf(" %d", i);
               }
            }
            flag++;  
        }
        }
     printf(".");

    return 0;
}
