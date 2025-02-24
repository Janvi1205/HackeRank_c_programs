/*Write a program to determine the type of 2D geometric figure based on the following properties:

Number of sides (n) – can be 3, 4, or 0 (for a circle).
Side lengths (a,b,c,d) – three sides if n=3, four if n=4, none for n=0.
Angles (A,B,C,D) in degrees – three angles if n=3, four if n=4, none for n=0..
The program should classify the figure into one of these categories:

Equilateral Triangle: n=3, all sides are equal, and all angles are 60°.
Isosceles Triangle: n=3, two sides are equal and the two angles opposite to the equal sides are congruent to each other
Scalene Triangle: n=3, all sides and angles are different.
Square: n=4, all sides are equal, and all angles are 90°.
Rectangle: n=4, opposite sides are equal, and all angles are 90°.
Rhombus: n=4, all sides are equal, but not all angles are 90°. Opposite angles are equal in a rhombus.
Parallelogram: n=4, opposite sides and opposite angles are equal.
Circle: n=0.
Invalid Figure: If the input is invalid or does not form a valid figure.
Input Format

An integer n: The number of sides
Three/Four/Zero integers (a,b,c,d): Positive values for side lengths
Three/Four/Zero integers (A,B,C,D): Angles in degrees
Constraints

n ∈ {0,3,4}.
-10^6 ≤ a,b,c,d ≤ 1000.
-10^6 ≤ A,B,C,D < 180.
Output Format

Print one of these:

Equilateral Triangle
Isosceles Triangle
Scalene Triangle
Square
Rectangle
Rhombus
Parallelogram
Circle
Invalid Figure
Sample Input 0

3 5 5 5 60 60 60
Sample Output 0

Equilateral Triangle
Sample Input 1

4 4 6 4 6 110 70 110 70*/

#include <stdio.h>

int main() {
    int n, a, b, c, d, e, f, g, h;
    scanf("%d", &n);
    
    if (n >= 0) {
        switch (n) {
            case 0:
                printf("Circle");
                break;
                
            case 3:
                scanf("%d %d %d %d %d %d", &a, &b, &c, &e, &f, &g);
                
                if (a > 0 && b > 0 && c > 0 && e > 0 && f > 0 && g > 0 && e + f + g == 180 && a + b > c && b + c > a && a + c > b) {
                    if (a == b && b == c && e == 60 && f == 60 && g == 60) {
                        printf("Equilateral Triangle");
                    }
                    else if ((a == b && e == f) || (b == c && f == g) || (a == c && e == g)) {
                        if ((a == b && c != a) || (b == c && a != b) || (a == c && b != a)) {
                            if ((e == f && g != e) || (f == g && e != f) || (e == g && f != e)) {
                                printf("Isosceles Triangle");
                            }
                            else {
                                printf("Invalid Figure");
                            }
                        }
                        else {
                            printf("Invalid Figure");
                        }
                    }
                    else if (a != b && b != c && c != a && e != f && f != g && g != e) {
                        printf("Scalene Triangle");
                    }
                    else {
                        printf("Invalid Figure");
                    }
                }
                else {
                    printf("Invalid Figure");
                }
                break;
                
            case 4:
                scanf("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
                
                if (a > 0 && b > 0 && c > 0 && d > 0 && e > 0 && f > 0 && g > 0 && h > 0 && e + f + g + h == 360) {
                    if (a == b && b == c && c == d) {
                        if (e == 90 && f == 90 && g == 90 && h == 90) {
                            printf("Square");
                        }
                        else if (e == g && f == h) {
                            printf("Rhombus");
                        }
                        else {
                            printf("Invalid Figure");
                        }
                    }
                    else if (a == c && b == d) {
                        if (e == 90 && f == 90 && g == 90 && h == 90) {
                            printf("Rectangle");
                        }
                        else if (e == g && f == h) {
                            printf("Parallelogram");
                        }
                        else {
                            printf("Invalid Figure");
                        }
                    }
                    else {
                        printf("Invalid Figure");
                    }
                }
                else {
                    printf("Invalid Figure");
                }
                break;
                
            default:
                printf("Invalid Figure");
                break;
        }
    }
    return 0;
}