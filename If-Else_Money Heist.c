/*You and your friend decided to pull off a heist at a heavily guarded bank vault. The vault is protected by a 10-digit passcode, each digit ranging from 0 to 9. However, the configuration is not as simple as just remembering the passcode. The vault's passcode is not straightforward — three wrong digits are randomly placed at three different positions.

Your friend, using some sophisticated tool, has managed to decode the correct digits and their positions. He tells you the exact positions (0-indexed) of the incorrect digits and the number by which the dial must be rotated to correct them.

Your task is to apply these changes and return the final passcode that will successfully open the vault.

Note: After the number 9, the dial wraps around back to 0.

Input Format

Space separated 10-digit vault configuration with 3 wrong digits.
Three pairs in new line provided, each pair on a new line. Each pair contains:
The index of the incorrect digit (0-indexed).
The number by which the dial must be rotated to correct it.
Constraints

All inputs are digits from 0 to 9

Output Format

Print the final 10-digit space separated passcode with the corrected digits at their respective positions which opens the vault.

Sample Input 0

3 1 4 7 5 4 2 9 5 4
3 5
7 4
1 5
Sample Output 0

3 6 4 2 5 4 2 3 5 4*/


#include <stdio.h>

int main() {
     int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;
    int pos, rot;
    scanf("%d %d %d %d %d %d %d %d %d %d", 
          &d1, &d2, &d3, &d4, &d5, &d6, &d7, &d8, &d9, &d10);
    

    for(int i = 0; i < 3; i++) {
        scanf("%d %d", &pos, &rot);
        
      
        if(pos == 0) {
            d1 = (d1 + rot) % 10;
        }
        else if(pos == 1) {
            d2 = (d2 + rot) % 10;
        }
        else if(pos == 2) {
            d3 = (d3 + rot) % 10;
        }
        else if(pos == 3) {
            d4 = (d4 + rot) % 10;
        }
        else if(pos == 4) {
            d5 = (d5 + rot) % 10;
        }
        else if(pos == 5) {
            d6 = (d6 + rot) % 10;
        }
        else if(pos == 6) {
            d7 = (d7 + rot) % 10;
        }
        else if(pos == 7) {
            d8 = (d8 + rot) % 10;
        }
        else if(pos == 8) {
            d9 = (d9 + rot) % 10;
        }
        else if(pos == 9) {
            d10 = (d10 + rot) % 10;
        }
    }
  
    printf("%d %d %d %d %d %d %d %d %d %d\n", 
           d1, d2, d3, d4, d5, d6, d7, d8, d9, d10);

   
    return 0;
}