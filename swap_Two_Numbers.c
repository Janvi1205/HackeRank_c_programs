/*Write a program to swap two numbers.

Input Format

Two unique integers a and b

Constraints

-10^6 <= a <= 10^6
-10^6 <= b <= 10^6
Output Format

Two lines printing the swapped values of a and b

Sample Input 0

10 5
Sample Output 0

a = 5
b = 10*/


#include <stdio.h>

int main() {
    
    int a,b,res;
    scanf("%d %d",&a,&b);

    res = a;
    a = b;
    b = res;
    
    printf("a = %d\n",a);
    printf("b = %d\n",b);

    return 0;
}