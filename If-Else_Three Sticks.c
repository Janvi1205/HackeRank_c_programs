/*Aman has three sticks and wants to classify the shape he can form by connecting their ends. The classification is based on the following rules:

The shape(triangle) is classified as:

Equilateral: All three sticks are of the same length.
Isosceles: Exactly two sticks are of the same length.
Scalene: All three sticks have different lengths.
However, if the sticks cannot be connected to form a triangle due to their lengths, it is classified as an Invalid shape.

Aman needs a program that will take the lengths of the three sticks as input, validate if they can form a valid closed shape, and output the correct classification.

Input Format

Three space-separated integers (a,b,c) representing the lengths of the sticks.

Constraints

1 <= a, b, c <= 10^6

Output Format

Print 3 different messages based on the input:

Lengths of the Sticks:
"Lengths: [a, b, c]"
Triangle Type:
"Type: Equilateral"
"Type: Isosceles"
"Type: Scalene"
"Type: Invalid"
Shape Characteristics:
"All sides are of the same length."
"Exactly two sides are equal."
"All sides are of different lengths."
"Cannot form a valid shape."
Sample Input 0

6 6 6
Sample Output 0

Lengths: [6, 6, 6]  
Type: Equilateral  
All sides are of the same length.  */

#include <stdio.h>

int main() {
   
    int a, b, c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    
    if (a + b <= c || b + c <= a || a + c <= b) {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.\n");
    }
  
    else if (a == b && b == c) {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }
  
    else if (a == b || b == c || a == c) {
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }
   
    else {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }
    return 0;
}