Vim
- Text editor just like VSCode. But by making placing and installing programming languages on your computer device environment, it can adapt to those programming languages and help you code in a versatile manner. Although it cannot execute codes, it utilizes features depending on the programming language the programmer is utilizing in order to code efficiently. 

- Vim has three basic modes:
1. Normal Mode (esc): Activates through the escape key. Returns the user to the normal state of Vim before Insert or Visual Mode. This is where you put commands to navigate Vim. Commands such as quitting Vim and saving files can be done here.
2. Insert Mode (i): Activated through the "i" key. Enables the ability to edit a user's chosen file.
3. Visual Mode (v): Activated through the "k" key. 
4. Command Mode (:): Is activated only on Normal mode + the ":" key. Commands are inputted in this mode in order to navigate Vim. Commands such as quitting Vim and saving files can be done here.

Vim Command Mode Lines 
1. w : Save
2. q : Quit without saving.
3. w! : Force save.
4. q!: Force quit.
5. wq : Save and quit.
6. wq! : Force save and quit.
7. j : move cursor up
8. k : move cursor down
9. h : move cursor left
10. l : move cursor right
11. dd : Delete entire line.
12. u : undo 
13. set number : Adds numbers on left-hand side of Vim for user-guidance. 
14. (number) : Input a number after ":". Once entered, the user's cursor will jump towards that row of the specified number. 
15. +p : paste
16. !python3 (name of python file) : Run Python scripts through the terminal.
17. i : Starts insert mode on the left of the cursor at normal mode.
18. I : Starts the insert mode on the start of the current line of the cursor at normal mode.
19. a : Starts the insert mode on the right of the cursor at normal mode.
20. A : Starts the insert mode on the end of the current line of the cursor at normal mode. 
21. x : Delete characters in reverse.
22. r : Replaces a character currently inside the cursor.
23. w : Skips words to the right.
24. b : Skips words to the left. 
25. (number)k : jommand Count Motion. Moves the cursor up a number of times with respect to the number a user inputs before the "k" key.
26. (number)j : Command Count Motion. Moves the cursor up a number of times with respect to the number a user inputs before the "j" key. 
27. r : redo
28. (number)dd : deletes the specified number of lines downwards with respect to the number a user inputs before the "dd" key.
29. y : copy
30. p : paste. The last thing you deleted is also pasted.
31. yy : copy whole line.
32. y(number)j : Copies (yanks) the number of lines downwards depending on the number the user has inputted in between the keys "y" and "j".
33. y(number)k : Copies (yanks) the number of lines upwards depending on the number the user has inputted in between the keys "y" and "j".
