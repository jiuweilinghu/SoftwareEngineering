#pragma once
#include<string>
#include<fstream>
using namespace std;

class SudoCreate
{
public :
	void toCreate(int n);         //构造新棋盘
	void printSudo();              //输出所生成的数独棋盘
private:
	int sudo[9][9]={             //构造新数独棋盘的原始棋盘
		{ 5, 6, 2, 8, 9, 3, 4, 7, 1 },
		{ 8, 9, 7, 5, 1, 4, 6, 3, 2 },
		{ 4, 1, 3, 2, 6, 7, 5, 9, 8 },
		{ 6, 3, 8, 7, 5, 1, 9, 2, 4 },
		{ 1, 7, 9, 6, 4, 2, 3, 8, 5 },
		{ 2, 4, 5, 3 ,8 ,9 ,7 ,1, 6 },
		{ 9, 2 ,6 ,4, 7, 8, 1, 5, 3 },
		{ 7, 8, 4, 1, 3, 5, 2, 6, 9 },
		{ 3, 5, 1, 9, 2, 6, 8, 4, 7 }
	};
};

