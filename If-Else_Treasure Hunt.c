/*Your task is to design a game where the player embarks on an adventurous treasure hunt. The game features an adventurer tasked with navigating a perilous treasure hunt in a mysterious labyrinth. The labyrinth is filled with traps, riddles, and challenges that will test his wit and bravery. The goal is to find the ultimate treasure hidden in one of the secret chambers. The objective is to simulate the treasure hunt journey and generate responses based on the player's decisions.

The game should display corresponding messages in new line for each action the player takes.

Game Description:

Starting Point: You begin at the entrance of the labyrinth. You must choose between three paths:
1: The Left Path (leads to a swamp).
2: The Middle Path (leads to a maze).
3: The Right Path (leads to an underground vault).
Left Path (Swamp):
You encounter a swamp. Your choices are:
1: Attempt to cross the swamp on foot.
Risk: Hidden quicksand which ends the game.
2: Search for a bridge to cross safely.
If you search for a bridge:
1: You find a sturdy bridge (safe crossing) and proceed to the final room.
2: The bridge collapses, and you fall into the swamp (lose the game).
Middle Path (Maze):
You enter a labyrinth filled with dead ends. To find the exit, you must solve a puzzle:
Puzzle: "I am a three-digit number. My second digit is four times bigger than the third digit, my first digit is three less than the second digit, and the sum of my digits is 15. What number am I?"
If you solve the puzzle correctly, you can proceed to the final room.
If incorrect, you trigger a trap and lose.
Right Path (Underground Vault):
You find a locked vault guarded by a puzzle.
Puzzle: "What number comes next in the sequence: 2, 6, 12, 20, __?"
A wrong answer triggers an alarm, and you are caught (game over).
If you solve the puzzle, you open the vault to find key to the final room.
Final Room:
Each successful path leads to a final treasure room.
There are three chests:
1: Take the Golden Chest (contains a deadly trap and ends the game).
2: Take the Silver Chest (an empty chest, player loses gaining nothing).
3: Take the Bronze Chest (contains the ultimate treasure, player wins the game).
Input Format

The first input is an integer representing the chosen path at the labyrinth entrance:
1 for the Left Path.
2 for the Middle Path.
3 for the Right Path.
Based on the chosen path:
For Left Path:
A second input, an integer, represents the action in the swamp:
1 to attempt crossing on foot.
2 to search for a bridge.
If 2, a third input is required:
1 if the bridge is sturdy.
2 if the bridge collapses.
For Middle Path:
A second input is the player's answer to the puzzle.
For Right Path:
A second input is the player's answer to the sequence puzzle.
After reaching the final room, a final input is required:
1 to choose the Golden Chest.
2 to choose the Silver Chest.
3 to choose the Bronze Chest.
Constraints

Path Choice:
Input must be 1, 2, or 3.
Action Choice:
Left Path: 1 or 2.
Middle Path: A valid 3-digit number.
Right Path: A valid single number.
Treasure Chest:
Input must be 1, 2, or 3.
Output Format

The game should print one message per decision, followed by the final outcome:

For the Entrance:
"Player chooses the [Left/Middle/Right] path."
For Left Path (Swamp):
If 1: "Poor choice, Game Over!"
If 2: "Player found a bridge.", and
1: "Player crosses the bridge safely"
2: "Poor luck, Game Over!"
For Middle Path (Maze):
If the puzzle is correct: "Player solved the puzzle."
If the puzzle is incorrect: "Foolish player, Game Over!"
For Right Path (Vault):
If the puzzle is correct: "Player solved the puzzle."
If the puzzle is incorrect: "Foolish player, Game Over!"
For the Final Room:
If 1: "All that glitters is not gold, Game Over!"
If 2: "All your efforts were for nothing, Game Over!"
If 3: "Congratulations!! You won the treasure."
Sample Input 0

1
2
1
3
Sample Output 0

Player chooses the Left path.
Player found a bridge.
Player crosses the bridge safely.
Congratulations!! You won the treasure.*/


#include <stdio.h>

int main() {
    
    int num ,choice4;
   
    scanf("%d",&num);
    if(num>0 && num<4){
     if(num==1)
    {
        int choice;
        printf("Player chooses the Left path.\n");
        
        scanf("%d",&choice);
        if(choice>0 && choice<3){
        if(choice==1){
            printf("Poor choice, Game Over!\n");
            return 0;
        } 
        else if(choice==2){
            
            printf("Player found a bridge.\n");
            int choice2;
            scanf("%d",&choice2);
            if (choice2>0 && choice2<3){
            if(choice2==1){
                printf("Player crosses the bridge safely.\n");
            }    
            else if(choice2==2){
                printf("Poor luck, Game Over!\n");
                return 0;
            } 
                else{
            return 0;}
            }
        }else{
            return 0;}
        }
         
     }
    else if(num==2)
    {
        int ch;
        printf("Player chooses the Middle path.\n");
        
        scanf("%d",&ch);
        
        if(ch==582){
            printf("Player solved the puzzle.\n");
        }
        else{
            printf("Foolish player, Game Over!\n");
            return 0;
        }
    }
    
    else if(num==3)
    {
        int choice3;
        printf("Player chooses the Right path.\n");
        
        scanf("%d",&choice3);
        
        if(choice3==30){
            printf("Player solved the puzzle.\n");
        }
        else{
            printf("Foolish player, Game Over!\n");
            return 0;
        }
        
    }
   
    
   
    scanf("%d",&choice4);
    if (choice4>0 && choice4<4){
    if(choice4==1)
    {
        printf("All that glitters is not gold, Game Over!");
    }
    else if(choice4==2)
    {
        printf("All your efforts were for nothing, Game Over!");
    }
    else if(choice4==3){
        printf("Congratulations!! You won the treasure.");
    }
    }
    
    } 
    return 0;
}