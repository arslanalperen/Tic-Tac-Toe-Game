#ifndef TICTACTOE_H
#define TICTACTOE_H
#include<iostream>
#include<windows.h>
#include<cctype>
#include<conio.h>
#include<iomanip>
using namespace std;

class game{
	private:
		string oneOneNick;
		string oneTwoNick;
		string twoOneNick;
		string twoTwoNick;
		char signs[4] = {'X','x','O','o'};
		char map[4][4] = {{'n','n','n','n'},{'n','n','n','n'},{'n','n','n','n'},{'n','n','n','n'}};
		int playerAtNow;
		int drawCounter;
		int analysisCounter;
	public:
		game(){
			oneOneNick = " ";
			oneTwoNick = " ";
			twoOneNick = " ";
			twoTwoNick = " ";
			playerAtNow = 0;
			drawCounter = 0;
			analysisCounter = 0;
		}
		void friend gotoxy(int x, int y);
		void friend nickPointer(int playerAtNow);
		void gameTheme();	
		void gameCode();
		void entranceTheme();
		void entranceCode();
		void signWrite(int line, int column, int i);
		int  winControl();
		void analysisTheme();
		void analysis();
		game& operator++();
};

void gotoxy(int x, int y);
void nickPointer();

#endif 
