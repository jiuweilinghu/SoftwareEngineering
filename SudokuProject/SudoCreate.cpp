/*
用以产生并输出数独棋盘
*/

#include "SudoCreate.h"
#include "ArraysGenerate.h"

void SudoCreate::toCreate(int n) {
	ArraysGenerate aryGene;
	int *ptr;
	int count = 0;
	int h, l;

	while (1)
	{
		ptr = aryGene.toGenerate();     //获取随机数组

		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				for (int k = 0; k < 9; k++) {
					if (sudo[i][j] == ptr[k]) {
						sudo[i][j] = ptr[(k + 1) % 9];
						break;
					}
				}
			}
		}

		if (sudo[0][0] != 5) {
			for (int i = 0; i < 3; i++) {
				for (int j = 0; j < 3; j++) {
					if (sudo[i][j] == 5)
					{
						h = i;
						l = j;
						break;
					}
				}
			}
			if (h == 0)
			{
				for (int i = 0; i < 9; i++) {
					swap(sudo[i][0], sudo[i][l]);
				}
			}
			if (l == 0) {
				for (int i = 0; i < 9; i++) {
					swap(sudo[0][i], sudo[h][i]);
				}
			}
			if (h != 0 && l != 0) {
				for (int i = 0; i < 9; i++) {
					swap(sudo[i][0], sudo[i][l]);
				}
				for (int i = 0; i < 9; i++) {
					swap(sudo[0][i], sudo[h][i]);
				}
			}
		}
		printSudo();
		count++;
		if (count == n)
			break;

		//列变换
		for (int line = 3; line < 9; line++)
		{
			for (int i = 0; i < 9; i++)
			{
				swap(sudo[i][line % 3 + 3], sudo[i][(line + 1) % 3 + 3]);
			}
			printSudo();
			count++;
			if (count == n)
				return;
		}

		for (int line = 6; line < 12; line++)
		{
			for (int i = 0; i < 9; i++)
			{
				swap(sudo[i][line % 3 + 6], sudo[i][(line + 1) % 3 + 6]);
			}
			printSudo();
			count++;
			if (count == n)
				return;
		}

		//行变换
		for (int row = 3; row < 9; row++)
		{
			for (int i = 0; i < 9; i++)
			{
				swap(sudo[row % 3 + 3][i], sudo[(row + 1) % 3 + 3][i]);
			}
			printSudo();
			count++;
			if (count == n)
				return;
		}

		for (int row = 6; row < 12; row++)
		{
			for (int i = 0; i < 9; i++)
			{
				swap(sudo[row % 3 + 6][i], sudo[(row + 1) % 3 + 6][i]);
			}
			printSudo();
			count++;
			if (count == n)
				return;
		}
	}
}

fstream outfile("sudoku.txt", ios::out);   //创建文件流对象，out为覆盖上次运行结果
void SudoCreate::printSudo() //输出新棋盘
{
	if (outfile.is_open())
	{
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				outfile << sudo[i][j] << ' ';
			}
			outfile << endl;
		}
		outfile << endl;
	}
}

void swap(int a, int b)    //自定义函数，用以交换两个数的位置
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
