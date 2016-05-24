# Numbrix-Connect-64

### Part 1
Part 1 of the project will consist of providing the following functionality:

1. Create four different starting puzzles that increase in difficulty. The player will automatically advance from 
one puzzle to the next after successfully completing the prior puzzle.
    * The UI should display the current puzzle number when playing the puzzle.

2. Display the puzzle in an 8x8 “grid” with its starting numbers in place and allow the player to begin playing the game. The gameplay should allow and enforce the following:
    * The player should not be able to edit any of the provided starting numbers.
    * The user should be able to enter a number within a cell. 
    * The number entry approach is up to you. When entering the number, if the number has already been entered or is not within the range of 1-64, the program prevent the player from entering the number and/or indicate so to the player. Note: the player should be allowed to enter a number in any open space that is not currently touching a numbered cell.

3. When the board is completed, it should be evaluated to see if it correctly completes the puzzle. If not, the player should be informed.
4. The game should allow the player the ability to edit and delete numbers already entered in cells and reset the entire board back to its starting point.
5. The game should remember the current puzzle and board entry for the player so that if the player quits they can return to their current board and current state.
6. The player should be able to select a particular puzzle to play, even if they have already played that puzzle.
7. All displayed text, with the exception of numbers, must be defined and stored in a resource file. This will include the form title, menu items, button text, etc.

---
### Part 2

Part 2 of the project will consist of providing the following functionality:

1. Adding an additional four puzzles for a total of 8 puzzles.

2. Provide a displayed timer that displays as the player plays each puzzle.

    * If the player resets the game, the timer should be reset to 0.
    
3. A top 10 scoreboard that will display the player’s name, the length of time, and the puzzle number that it was achieved on. The scoreboard should be sorted according to the length of time it took to complete a puzzle in ascending order. There only needs to be a single top 10 scoreboard for the entire game. I.e., you will not create a separate scoreboard for each puzzle. The player should be able to view the scoreboard and also to reset the scoreboard.

    * The top 10 scoreboard needs to be persistent between multiple invocations of the program.
    

---

### Part 3
1. Adding an additional four puzzles for a total of 12.
2. Allow the ability to pause the game.
    * If the game is paused the puzzle board should not be visible during this time and the timer should be paused.
3. Add ability to provide the player aural feedback.
    * The aural feedback should be employed when the player enters an invalid number or does not complete the puzzle correctly.
    * If the player successfully completes the puzzle, then an appropriate sound should be played.
4.Add user settings for the following:
    * Turn on/off aural feedback. 
    * Change the default color of the cells and numbers.
    * The settings should be persistent through various invocations of the game
