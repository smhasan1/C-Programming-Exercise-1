# C-Programming-Exercise-1
Write an ANSI C program to do the following  
The program reads from the standard input a number of records, each record in a line. The record consists of the following fields  
• The team name: a sequence of characters ( letters, numerals and _ ) with a maximum of 30 characters.  
• The number of games won 1-99  
• The number of games tied 1-99  
• The number of games lost 1-99  
• Streak, a positive streak indicates a winning streak, a negative streak indicates a losing streak. (read from the standard input until end of file) Fields in the input are separated by white spaces (spaces or tabs).  
The program should read the data and display a list with the team name, points earned, and streak. The points are calculated as 3 point for win, 1 point for tie, and 0 for loss.  
For example, one output should look like that  
Renegades\tx35\tx+5 where \t means a tab and x is a space. Do not output the two characters \ (”slash”) and t, output a tab.  
The number of points are to be written in 3 digits (right justified) and the streak is a sign follows by a number in 3 digits (right justified). The sign and the number together in 3 spaces  
Right justified means proceeded by spaces to the left, so for example 23 in 5
spaces right justified is xxx
Each record should end with a newline (including the last one).  
After you display the standings, then an empty line followed by two lines as follows  
The max points by any team is then followed by the maximum number of points by any team in 5 spaces right justified.  
The longest winning streak is followed by the maximum winning streak in 5 spaces right justified. If there is no team with a winning streak, the streak should be 0.  
The program should be able to deal with the following cases.  
If the number of games (won, lost, or tied) is -ve, the program should output the name of the team, followed by a tab, then the string “negative number of games” followed by a new line.  
Else if the total number of games played is more than 99.  
The program should output the name of the team as above, followed by a tab, followed by “games played are more than 99” followed by a newline.  
