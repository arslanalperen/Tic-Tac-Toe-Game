# Tic-Tac-Toe-Game

**<h1>Project Objective</h1>**

The aim of the project is to make a Tic Tac Toe game. The general logic is that the XoX game is played in teams of two. Since the teams are for two people, the characters are in the form of XxOoXx. Likewise, the map is 4x4. Teams win the game if they print their characters on 4 squares, one below the other, side by side or diagonally. At the beginning of the game, nicknames are taken from the players. At the end of the game, statistics related to the game are shown.  

**<h1>Description of Problem</h1>**

To be able to effectively use the console screens that we will print the entrance, exit and game screens of the game, to enable the teams to place their characters wherever they want on the game board, to analyze the placed characters and to determine the winning status and to print this situation on the screen.   

**<h1>Description of Method</h1>**  

I created the game in C++ using a class, member functions, operator overload functions, friend functions. When the game is first opened, the names of the players are taken. Names are assigned to the corresponding string variables. When the game board is in front of us, the row and column to be placed are taken, starting from the first player. These values are assigned to the relevant variables. In the meantime, I added the printed characters to the char matrix I created. I evaluated the game win, draw and endgame statistics on this matrix. For win and draw situations, I determined the situations by examining the matrix first as a row, then as a column, then diagonally, and finally the entire matrix. Finally, I examined the matrix again, determined the statistical figures and printed them on the screen.  

**<h1>User's Guide</h1>**  

The program was created with a class structure called class game. Structures such as member functions, overload functions, friend functions were used. As variables, global variables, private variables belonging to the class, and local variables of functions can be called. There is no global variable in the program. If we talk about input parameters, gotoxy function moves the cursor to the desired position on the console screen by using the x and y variables sent to it with coordinate logic. Inside the code this function does not take any value from the user. Used only with values determined by me. The variable named SignWrite allows players to print their characters (such as X, o) in the row and column they want. It takes the values of the row, column and an int variable that gives information about which player made a move, which is also entered as an input parameter. Finally, the function responsible for printing the pointer to the screen, which will allow the players to understand which player is next when they look at the screen, takes an input parameter. It takes an int variable that stores which player will play as an input and accordingly prints a marker next to the name of the player while playing. Other functions other than that do not receive input. If we talk about the outputs, we can say the input and output menus and the game menu where the game is played. In possible limitations, if the players enter a value greater than 4 for the row and column, the game expects the same player to enter the value again without skipping the turn. In possible mistakes, sometimes the team's win may not be counted in cross-win situations. In addition, if the player enters a very long nick on the first screen, a certain part of the nick cannot be displayed when the game screen is reached.  

**<h1>Results of the Solution</h1>**  

When the game is opened for the first time, you will see the screen as below. Then the names of the players are taken.  

![Entrance](/images/girisEkran.png)  
![Entrance2](/images/girisEkran2.png)  

After the players enter their names, a game screen like the one below opens.  

![Game](/images/oyunEkrani.png)  

In case of winning, visuals such as the following are encountered.  

![CrossWin](/images/caprazKazanma.png)  
![RowWin](/images/satirKazanma.png)  
![ColumnWin](/images/sutunKazanma.png)  
![Statistics](/images/IstatistikSayfasi.png)  

**<h1>Flowchart of the Program</h1>**  

![Flowchart](/images/Flowchart.png)  

**<h1>Conclusion and Remarks</h1>**  

During this project, I used very little internet during the problems I usually encounter. Apart from some syntax uses that I forgot, I overcame the problems I encountered while building the algorithm and code. This caused me to spend a lot of time on the code. But as a result, it gave me new abilities in better algorithm and code building. Now I can perceive and apply logics that I would have spent hours in the past, in a shorter time and easily. Of course, this is the purpose of such projects. That's why I can say that I gained the features I needed to gain during this project. The program works 90% of the time. There is a problem only in the case of winning from the right diagonal. In combinations other than that, there is no problem when the teams win or draw. The program is very user friendly. When players enter the game, they can solve and play the game without any difficulty. The improvement of the code can be achieved by reducing the number of lines of the code by considering longer times on the algorithm logic and trying different methods. The problem about the right diagonal win situation can be eliminated. Apart from that, I spared enough time for the project during the project and I took the necessary care by thinking about the problems myself and trying to establish my own algorithm logic. As for the skills I gained, I have at least an entry level knowledge of how to approach the code and what kind of algorithm logic should be set up in open-ended programs where the probability of the difference in the data to be analyzed as a result of the program is quite high. As in every project, I have advanced myself in algorithm building and discovered new functions and libraries.  

**<h1>References</h1>**  

•	Kodlakafa.com  
•	Alldatasheet.com  
•	Stackoverflow.com  
•	Algoritmaornekleri.com  
•	Arduinolibraries.com  
•	Github.com  
•	Sanatsalbilgi.com  
•	Theengineeringprojects.com  
•	Rapidtables.com  
•	Koddefteri.com  
•	Erhanulman.com  
•	Forum.donanimhaber.com  
•	Cagataycebi.com  
•	Forum.csharpnedir.com  
•	En.wikipedi0.org  
•	Hayaletveyap.com  
•	Grafiboyz.blogcu.com  
•	Aliozcan.org  
•	Gelecegiyazanlar.turkcell.com.tr  
•	Iucoders.com  
•	Sanalkurs.net  
•	Buraksenyurt.com  
•	Microcore.com  
•	Link24in.wordpress.com  
•	Soyunmezoglubaris.blogspot.com  
•	Motorobit.com  
•	Kodumundunyasi.net  
