/*
用以产生并输出数独棋盘
*/

#include "SudoCreate.h"
#include "ArraysGenerate.h"

void SudoCreate::toCreate(int n) {
	ArraysGenerate aryGene;
	int *ptr;
	int line;
	int row;

	for (int count = 0; count < n; count++) {
		ptr = aryGene.toGenerate();     //获取随机数组

		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++) {
				sudo[i][j] = ptr[sudo[i][j]];   //构造新棋盘
			}
		}

		if (sudo[0][0] != 5)                 //要求棋盘左上角为座号后两位相加对9取模再加一，
		{                                    //我的尾号为13，所以左上角恒为5，若新棋盘左上角不为5
			for (int i = 0; i < 3; i++)      //要进行调整
			{
				for (int j = 0; j < 3; j++)
				{
					if (sudo[i][j] == 5)
					{
						line = i;          //记录5所在左上角九宫格中的位置
						row = j;
						break;
					}
				}
			}

			if (line != 0)
			{
				for (int i = 0; i < 9; i++)
				{
					swap(sudo[line][i], sudo[0][i]);  //行变化
				}
			}
			if (row != 0)
			{
				for (int i = 0; i < 9; i++)
				{
					swap(sudo[i][0], sudo[i][row]);   //列变化
				}
			}
		}
		printSudo();
	}
}

void SudoCreate::printSudo() {    //输出新棋盘
	ofstream outfile("soduku.txt",ios::app);   //创建文件流对象，app为追加在文件尾
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			outfile << sudo[i][j]<<' ';
		}
		outfile << endl;
	}
	outfile << endl;
}

void swap(int a, int b)    //自定义函数，用以交换两个数的位置
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}