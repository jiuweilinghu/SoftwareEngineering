/*
���Բ����������������
*/

#include "SudoCreate.h"
#include "ArraysGenerate.h"

void SudoCreate::toCreate(int n) {
	ArraysGenerate aryGene;
	int *ptr;
	int count = 0;
	
	while (1) 
	{
		ptr = aryGene.toGenerate();     //��ȡ�������
		
		for (int i = 0; i < 9; i++) 
		{
			for (int j = 0; j < 9; j++) 
			{
				sudo[i][j] = ptr[sudo[i][j]];   //����������  
			}
		}
		printSudo();
		count++;
		if (count == n)
			break;

		//�б任
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

		//�б任
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

fstream outfile("sudoku.txt", ios::out);   //�����ļ�������outΪ�����ϴ����н��
void SudoCreate::printSudo() //���������
{    
	if(outfile.is_open())
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

void swap(int a, int b)    //�Զ��庯�������Խ�����������λ��
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
