#pragma once
#include<string>
#include<fstream>
using namespace std;

class SudoCreate
{
public :
	void toCreate(int n);         //����������
	void printSudo();              //��������ɵ���������
private:
	int sudo[9][9]={             //�������������̵�ԭʼ����
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

